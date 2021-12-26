/*#include "clientmanager.h"
#include <iostream>
#include <string>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

#include "client.h"

using namespace boost::json;

Clientmanager::Clientmanager(lient &cl): client(cl) {}

int Clientmanager::login(std::string& user, std::string& password) {
    value jv = {
        { "type", "login" },
        { "info", {
            { "user", user },
            { "password", password }
        } }
    };

    std::string json = client.send(std::string(serialize(jv)));

    error_code ec;
    value json_data;

    try {
        json_data = parse(json, ec);
    } catch(std::bad_alloc const& e) {
        return false;
    }

    object const& data = json_data.as_object();

    return value_to<int>(data.at("type"));
}*/