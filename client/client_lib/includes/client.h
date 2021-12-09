#pragma once

#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

using namespace boost::json;
using boost::asio::ip::tcp;

class Client {
public:
    Client(boost::asio::io_context &io_context);

    void connect(const std::string& server, const std::string& port);

    std::string send(std::string json);

    int login(const std::string& user, const std::string& password);
private:
    boost::asio::io_context &io_context_;
    tcp::socket socket_;
    std::string msg;
    enum { max_length = 1024 };
    char data_[max_length];
};