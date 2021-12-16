#include "command.h"

#include <cstdlib>
#include <string>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

#include <map>

#include "game_manager.h"

using namespace boost::json;

bool Command::login(std::string json, std::string& buf) {
    value jv;

    try {
        object const& data = safly_read(json);

        
    
        try {
            user = Game_manager::get_instance()->login(boost::json::value_to<std::string>(data.at("info").at("user")), boost::json::value_to<std::string>(data.at("info").at("password")));
        } catch (std::exception& inv) {
            jv = {
                { "type", 0 },
                { "info", {
                    { "msg", "Wrong password or login" }
                } }
            };

            buf = serialize(jv);

            return false;
        }

        jv = {
            { "type", 1 },
            { "info", {
                { "user", value_to<std::string>(data.at("info").at("user")) },
            } }
        };
        buf = serialize(jv);

        return true;
    } catch (std::exception& inv) {
        return false;
    }
}

void Command::controller(std::string json, std::string& buf) {
    value jv;

    try {
        object const& data = safly_read(json);
    
        if(value_to<std::string>(data.at("type")) == std::string("rooms")) {
            all_rooms(data, buf);
        }
    } catch (std::exception& inv) {
        
    }
}

void Command::all_rooms(object const& data, std::string& buf) {
    buf = value_to<std::string>(data.at("type")) + std::string("anume");
}

object const Command::safly_read(std::string& json) {
    value json_data;
    boost::json::error_code ec;

    try {
        json_data = parse(json, ec);
    } catch(std::bad_alloc const& e) {
        throw std::invalid_argument("Failed parsing");
    }

    if (ec) {
        throw std::invalid_argument("Failed parsing");
    }

    return json_data.as_object();
}

Command::Command() {
    // game = Game_manager::get_instance();
}