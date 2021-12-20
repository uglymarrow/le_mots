#include "command.h"

#include <cstdlib>
#include <string>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

#include <map>

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
    
        if(value_to<std::string>(data.at("type")) == "rooms") {
            all_rooms(data, buf);
        } else if(value_to<std::string>(data.at("type")) == "join_room") {
            join_room(data, buf);
        } else {
            create_room(data, buf);
        }
    } catch (std::exception& inv) {
        
    }
}

void Command::all_rooms(object const& data, std::string& buf) {
    //buf = value_to<std::string>(data.at("type")) + std::string("anume");

    std::map<int, class Room> rooms = Game_manager::get_instance()->view_all_players();

    int i = 0;
    value *arr = new value[rooms.size()];

    for (int = 0; i < rooms.size(); i++) {
        arr[i] = {
            {"id", rooms[i].second.get_id()},
            {"name", rooms[i].second.get_name()}
        }
    }

    value jv = {
        { "type", 1 },
        { "info", arr }
    };
    buf = serialize(jv);
}

void Command::create_room(object const& data, std::string& buf) {
    //buf = value_to<std::string>(data.at("type")) + std::string("anume");

    bool re = Game_manager::get_instance()->create_room(value_to<std::string>(data.at("info").at("name")), user);

    value jv = {
        { "type", 1 }
    };
    buf = serialize(jv);
}

void Command::join_room(object const& data, std::string& buf) {
    Game_manager::get_instance()->get_room(value_to<int>(data.at("info").at("id"))->add_player(Game_manager::get_instance()->get_player(user.get_id()));

    value jv = {
        { "type", 1 }
    };
    buf = serialize(jv);
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
}