#include "client.h"

#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

Client::Client(boost::asio::io_context &io_context): io_context_(io_context), socket_(io_context_) {}

void Client::connect(const std::string& server, const std::string& port) {
    tcp::resolver resolver(io_context_);
    tcp::resolver::query query(server, port);
    tcp::resolver::results_type endpoints = resolver.resolve(query);

    boost::asio::connect(socket_, endpoints);
}

std::string Client::send(std::string json) {
    boost::asio::write(socket_, boost::asio::buffer(json, json.size()));

    boost::asio::streambuf response_buf;
    boost::asio::read_until(socket_, response_buf, "\r\n");

    return std::string((std::istreambuf_iterator<char>(&response_buf)), std::istreambuf_iterator<char>() );
}