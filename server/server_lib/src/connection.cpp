#include "connection.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/bind/bind.hpp>
#include <boost/asio.hpp>

#include "command.h"

using boost::asio::ip::tcp;

Connection::Connection(boost::asio::io_context& io_context): contr(), socket_(io_context) {}

Connection::~Connection(){
    std::cout << Player.get_login() << " вышел с сервера" << std::endl;
}

tcp::socket& Connection::socket() {
    return socket_;
}

void Connection::start() {
    socket_.async_read_some(boost::asio::buffer(data_, max_length),
                            boost::bind(&Connection::handle_read, this,
                                        boost::asio::placeholders::error,
                                        boost::asio::placeholders::bytes_transferred));
}

void Connection::handle_login(const boost::system::error_code& error, size_t bytes_transferred) {
    if (!error) {
        if (!contr.login(std::string(data_, bytes_transferred), buf)) {

            buf = buf + std::string("\r\n");
            boost::asio::async_write(socket_, boost::asio::buffer(buf, buf.size()), boost::bind(&Connection::handle_write, this, boost::asio::placeholders::error));

            socket_.async_read_some(boost::asio::buffer(data_, max_length),
                                    boost::bind(&Connection::handle_login, this,
                                                boost::asio::placeholders::error,
                                                boost::asio::placeholders::bytes_transferred));
        } else {
            std::cout << "!!!!!!!" << std::endl;
            buf = buf + std::string("\r\n");
            boost::asio::async_write(socket_, boost::asio::buffer(buf, buf.size()), boost::bind(&Connection::handle_write, this, boost::asio::placeholders::error));
        }
    } else delete this;
}

void Connection::handle_read(const boost::system::error_code& error, size_t bytes_transferred) {
    if (!error) {
        if (auth) {
            
            contr.controller(std::string(data_, bytes_transferred), buf);
            buf = buf + std::string("\r\n");

            boost::asio::async_write(socket_, boost::asio::buffer(buf, buf.size()), boost::bind(&Connection::handle_write, this, boost::asio::placeholders::error));
        } else {
            auth = contr.login(std::string(data_, bytes_transferred), buf);
            buf = buf + std::string("\r\n");

            boost::asio::async_write(socket_, boost::asio::buffer(buf, buf.size()), boost::bind(&Connection::handle_write, this, boost::asio::placeholders::error));
        }
        
    } else delete this;
}

void Connection::handle_write(const boost::system::error_code& error) {
    if (!error) {

        socket_.async_read_some(boost::asio::buffer(data_, max_length),
                                boost::bind(&Connection::handle_read, this,
                                            boost::asio::placeholders::error,
                                            boost::asio::placeholders::bytes_transferred));
    } else {
        delete this;
    }
}