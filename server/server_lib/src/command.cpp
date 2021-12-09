#include "command.h"

#include <cstdlib>
#include <string>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

using namespace boost::json;

Command::Command() {}

bool Command::login(std::string json, std::string& buf) {
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