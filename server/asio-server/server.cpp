#include <cstdlib>
#include <iostream>
#include <boost/bind/bind.hpp>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

class Connection
{
    tcp::socket socket_;
public:
    Connection(boost::asio::io_context& io_context): socket_(io_context){}

    void start(){}

    void read(){}

    void write(std::string message){}
};

class Server
{
    boost::asio::io_context io_context_;
    tcp::acceptor acceptor_;
public:
    Server(short port): acceptor_(io_context_, tcp::endpoint(tcp::v4(), port))
    {
        start_accept();
    }

    void run()
    {
        io_context_.run();
    }

private:
    void start_accept()
    {
        Connection* new_connection = new Connection(io_context_);
        acceptor_.async_accept(new_connection->socket(), boost::bind(&Server::accept, this, new_connection, boost::asio::placeholders::error));
    }

    void accept(Connection* new_connection, const boost::system::error_code& error)
    {
        if (!error)
        {
            new_connection->start();
        }
        else
        {
            delete new_connection;
        }

        start_accept();
    }
};