#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/bind/bind.hpp>
#include <boost/asio.hpp>

#include "../command/command.h"

using boost::asio::ip::tcp;

class Connection {
public:
    Connection(boost::asio::io_context& io_context);

    tcp::socket& socket();

    void start();

private:
    void handle_login(const boost::system::error_code& error, size_t bytes_transferred);

    void handle_read(const boost::system::error_code& error, size_t bytes_transferred);

    void handle_write(const boost::system::error_code& error);

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
    Server(short port);

    void run();

private:
    void start_accept();

    void handle_accept(Connection* new_connection, const boost::system::error_code& error);

private:
    boost::asio::io_context io_context_;
    tcp::acceptor acceptor_;
};