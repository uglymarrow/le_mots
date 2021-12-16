#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/json.hpp>
#include <map>

#include "user.h"
#include "word.h"
#include "game_manager.h"
#include "player.h"

using namespace boost::json;

class Command {
public:
    Command();

    bool login(std::string json, std::string& buf);

    void controller(std::string json, std::string& buf);
private:
    Player user;
    // Game_manager* game;
    void all_rooms(object const& data, std::string& buf);

    object const safly_read(std::string& json);
};