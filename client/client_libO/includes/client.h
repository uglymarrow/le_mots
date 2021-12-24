#pragma once

#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

class Client {
public:
    Client(boost::asio::io_context &io_context);

    void connect(const std::string& server, const std::string& port);

    std::string send(std::string json);
private:
    boost::asio::io_context &io_context_;
    tcp::socket socket_;
    std::string msg;
    enum { max_length = 1024 };
    char data_[max_length];
};