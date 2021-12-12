#include "client.h"

#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <map>
#include <boost/asio.hpp>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

using namespace boost::json;
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

    // Read the response status line. The response streambuf will automatically
    boost::asio::streambuf response_buf;
    boost::asio::read_until(socket_, response_buf, "\r\n");

    return std::string((std::istreambuf_iterator<char>(&response_buf)), std::istreambuf_iterator<char>() );
}

int Client::login(const std::string& user, const std::string& password) {
    value jv = {
        { "type", "login" },
        { "info", {
            { "user", user },
            { "password", password }
        } }
    };

    std::string json = send(std::string(serialize(jv)));

    std::cout << json << std::endl;

    error_code ec;
    value json_data;

    try {
        json_data = parse(json, ec);
    } catch(std::bad_alloc const& e) {
        return 0;
    }

    object const& data = json_data.as_object();

    return value_to<int>(data.at("type"));
}