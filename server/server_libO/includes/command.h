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
#include "room.h"


using namespace boost::json;

class Command {
 public:
  Command();

  bool login(std::string json, std::string& buf);

  void controller(std::string json, std::string& buf);
 private:
  Player user;
  int room_id;
  // Game_manager* game;
  void all_rooms(object const& data, std::string& buf);
  void create_room(object const& data, std::string& buf);
  void join_room(object const& data, std::string& buf);
  void check_word(object const& data, std::string& buf);
  void get_winner(object const& data, std::string& buf);
  void is_ready(object const& data, std::string& buf);

  object const safly_read(std::string& json);
  //std::map<std::string, std::function<void(object const&, std::string&)>> FuncMap;
};