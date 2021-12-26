#include "command.h"

#include <cstdlib>
#include <string>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

#include <map>

using namespace boost::json;

Command::~Command() {
    Game_manager::get_instance()->delete_player(user.get_id());
}

bool Command::login(std::string json, std::string& buf) {
    value jv;

    try {
        object const& data = safly_read(json);

        try {
            if (value_to<std::string>(data.at("type")) == "login")
                user = Game_manager::get_instance()->login(boost::json::value_to<std::string>(data.at("info").at("user")), boost::json::value_to<std::string>(data.at("info").at("password")));
            else
                user = Game_manager::get_instance()->register_player(boost::json::value_to<std::string>(data.at("info").at("user")), boost::json::value_to<std::string>(data.at("info").at("password")));
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
        } else if(value_to<std::string>(data.at("type")) == "is_ready") {
            is_ready(data, buf);
        } else if(value_to<std::string>(data.at("type")) == "check_word") {
            check_word(data, buf);
        } else if(value_to<std::string>(data.at("type")) == "get_winner") {
            get_winner(data, buf);
        } else if(value_to<std::string>(data.at("type")) == "stats") {
            get_stats(data, buf);
        } else if(value_to<std::string>(data.at("type")) == "leave_room") {
            leave_room(data, buf);
        } else if(value_to<std::string>(data.at("type")) == "get_score") {
            get_score(data, buf);
        } else {
            create_room(data, buf);
        }
    } catch (std::exception& inv) {
        
    }
}

void Command::all_rooms(object const& data, std::string& buf) {
    //buf = value_to<std::string>(data.at("type")) + std::string("anume");

    std::map<int, class Room> rooms = Game_manager::get_instance()->view_all_rooms();
    value jv;

    std::string act_rooms = "";
    int count = 0;

    for (auto &kv : rooms) {
        if (kv.second.is_ready()) {
            count++;
            act_rooms += to_string(kv.first) + ",";
            act_rooms += kv.second.get_name() + ",";
        }
    }
    
    jv = {
        { "type", 1 },
        { "info", {
            { "rooms", act_rooms },
            { "count", count }
        } }
    };
    
    buf = serialize(jv);
}

void Command::create_room(object const& data, std::string& buf) {
    std::cout << value_to<std::string>(data.at("info").at("name")) << std::endl;

    std::pair<int, std::string> rez = Game_manager::get_instance()->create_room(value_to<std::string>(data.at("info").at("name")), &user);

    room_id = std::get<0>(rez);

    value jv = {
        { "type", 1 },
        { "info", {
            { "word", std::get<1>(rez) },
            { "id", room_id }
        } }
    };
    buf = serialize(jv);
}

void Command::is_ready(object const& data, std::string& buf) {
    value jv = {
        { "type", (int)Game_manager::get_instance()->get_room(room_id)->is_ready() }
    };
    buf = serialize(jv);
}

void Command::get_winner(object const& data, std::string& buf) {
    value jv = {
        { "type", 1 },
        { "info", {
            { "user", Game_manager::get_instance()->get_room(room_id)->get_winner() }
        } }
    };

    if (Game_manager::get_instance()->get_room(room_id)->to_delete())
        Game_manager::get_instance()->delete_room(room_id);

    buf = serialize(jv);
}

void Command::get_score(object const& data, std::string& buf) {
    value jv = {
        { "type", 1 },
        { "info", {
            { "score", Game_manager::get_instance()->get_room(room_id)->get_score_opp(user.get_id()) }
        } }
    };

    buf = serialize(jv);
}

void Command::leave_room(object const& data, std::string& buf) {
    Game_manager::get_instance()->get_room(room_id)->delete_player(user.get_id());

    value jv = {
        { "type", 1 }
    };

    if (Game_manager::get_instance()->get_room(room_id)->to_delete())
        Game_manager::get_instance()->delete_room(room_id);

    buf = serialize(jv);
}

void Command::get_stats(object const& data, std::string& buf) {
    value jv = {
        { "type", 1 },
        { "info", {
            { "wins", Game_manager::get_instance()->get_player(user.get_id())->get_stat().win_game },
            { "games", Game_manager::get_instance()->get_player(user.get_id())->get_stat().games },
            { "loses", Game_manager::get_instance()->get_player(user.get_id())->get_stat().lose_game }
        } }
    };

    buf = serialize(jv);
}

void Command::join_room(object const& data, std::string& buf) {
    std::string word = Game_manager::get_instance()->get_room(value_to<int>(data.at("info").at("id")))->add_player(Game_manager::get_instance()->get_player(user.get_id()));

    room_id = value_to<int>(data.at("info").at("id"));

    value jv = {
        { "type", 1 },
        { "info", {
            { "word", word }
        } }
    };
    buf = serialize(jv);
}

void Command::check_word(object const& data, std::string& buf) {
    int answ = Game_manager::get_instance()->check_answer(user.get_id(), room_id, value_to<std::string>(data.at("info").at("word")));

    value jv = {
        { "type", answ }
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