#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/bind/bind.hpp>
#include <boost/asio.hpp>
#include <boost/json.hpp>
#include <boost/json/src.hpp>




using namespace boost::json;
using boost::asio::ip::tcp;

class Command {
public:
    Command() {};

    bool login(std::string json, std::string& buf) {
        //Database* test = Database::getInstance();
        
        value jv;
        value json_data;
        // error_code ec;

        try {
            json_data = parse(json);
        } catch(std::bad_alloc const& e) {
            jv = {
                { "error", 1 },
                { "msg", "Parsing failed" }
            };

            buf = serialize(jv) + std::string("\r\n");

            return false;
        }

        // if (ec) {
        //     jv = {
        //         { "error", 2 },
        //         { "msg", "Parsing failed" }
        //     };

        //     buf = serialize(jv);

        //     return false;
        // }
        object const& data = json_data.as_object();
        jv = {
            { "user", boost::json::value_to<std::string>(data.at("user")) },
            { "msg", "Wrong password or login" }
        };

        buf = serialize(jv) + std::string("\r\n");

        return false;

        /*
        
        try {
            user = test->login(boost::json::value_to<std::string>(data.at("user")), boost::json::value_to<std::string>(data.at("password")));
        } catch (std::exception& inv) {
            jv = {
                { "error", 3 },
                { "msg", "Wrong password or login" }
            };

            buf = serialize(jv);

            return false;
        }
        
        jv = {
            { "nickname", user.get_nickname() },
            { "auth", true }
        };
        buf = serialize(jv);

        return true;*/
    }
private:
    //Player user;
};

class Connection {
public:
    Connection(boost::asio::io_context& io_context): contr(), socket_(io_context) {}

    tcp::socket& socket() {
        return socket_;
    }

    void start() {
        socket_.async_read_some(boost::asio::buffer(data_, max_length),
                                boost::bind(&Connection::handle_login, this,
                                            boost::asio::placeholders::error,
                                            boost::asio::placeholders::bytes_transferred));
    }

private:
    void handle_login(const boost::system::error_code& error, size_t bytes_transferred) {
        if (!error) {
            if (!contr.login(std::string(data_), buf)) {
                boost::asio::async_write(socket_, boost::asio::buffer(buf, buf.size()), boost::bind(&Connection::handle_write, this, boost::asio::placeholders::error));

                socket_.async_read_some(boost::asio::buffer(data_, max_length),
                                        boost::bind(&Connection::handle_login, this,
                                                    boost::asio::placeholders::error,
                                                    boost::asio::placeholders::bytes_transferred));
            } else boost::asio::async_write(socket_, boost::asio::buffer(buf, buf.size()), boost::bind(&Connection::handle_write, this, boost::asio::placeholders::error));
        } else delete this;
    }

    void handle_read(const boost::system::error_code& error, size_t bytes_transferred) {
        if (!error) {
            //buf = contr.do(std::string(data_));
            //boost::asio::async_write(socket_, boost::asio::buffer(buf, buf.size()), boost::bind(&Connection::handle_write, this, boost::asio::placeholders::error));
        } else delete this;
    }

    void handle_write(const boost::system::error_code& error) {
        if (!error) {
            socket_.async_read_some(boost::asio::buffer(data_, max_length),
                                    boost::bind(&Connection::handle_read, this,
                                                boost::asio::placeholders::error,
                                                boost::asio::placeholders::bytes_transferred));
        } else {
            delete this;
        }
    }

private:
    Command contr;
    bool auth = 0;
    std::string buf;
    tcp::socket socket_;
    enum { max_length = 1024 };
    char data_[max_length];
};

class Server {
public:
    Server(short port): acceptor_(io_context_, tcp::endpoint(tcp::v4(), port)) {
        start_accept();
    }

    void run() {
        io_context_.run();
    }

private:
    void start_accept() {
        Connection* new_connection = new Connection(io_context_);
        acceptor_.async_accept(new_connection->socket(), boost::bind(&Server::handle_accept, this, new_connection, boost::asio::placeholders::error));
    }

    void handle_accept(Connection* new_connection, const boost::system::error_code& error) {
        if (!error) {
            new_connection->start();
        } else {
            delete new_connection;
        }

        start_accept();
    }

private:
    boost::asio::io_context io_context_;
    tcp::acceptor acceptor_;
};

int main(int argc, char* argv[]) {
    try {
        if (argc != 2) {
            std::cerr << "Usage: async_tcp_echo_server <port>\n";
            return 1;
        }
        //Database* test = Database::getInstance();
        //test->connect("tcp://127.0.0.1:3306", "login", "kFBrpvet");
        Server s(std::atoi(argv[1]));

        s.run();
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}