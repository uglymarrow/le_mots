#include "command.h"

#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <map>
#include <boost/asio.hpp>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

// #include "player.h"

using namespace boost::json;
using boost::asio::ip::tcp;

Command::Command(boost::asio::io_context &io_context): client(io_context) {
    client.connect(std::string("127.0.0.1"), std::string("8000"));
}

Profile Command::login(const std::string& user, const std::string& password) {
    value jv = {
        { "type", "login" },
        { "info", {
            { "user", user },
            { "password", password }
        } }
    };

    std::string json = client.send(std::string(serialize(jv)));

    std::cout << json << std::endl;

    error_code ec;
    value json_data;

    try {
        json_data = parse(json, ec);
    } catch(std::bad_alloc const& e) {
        throw std::invalid_argument("Failed parsing");
    }

    object const& data = json_data.as_object();

    if (!value_to<int>(data.at("type"))) throw std::invalid_argument("User not found");

    return Profile(value_to<std::string>(data.at("info").at("user")));
}

std::string Command::all_rooms() {
    value jv = {
        { "type", "rooms" }
    };

    std::string json = client.send(std::string(serialize(jv)));

    return json;
}