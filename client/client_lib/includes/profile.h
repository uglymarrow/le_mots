#pragma once

#include <string>

/*struct Stat {
  int win_game = 0;//для статистики пользователя
  int lose_game = 0;//для статистики пользователя
  int games = 0;//для статистики пользователя
};*/

class Profile {
  std::string login;
  //Stat player_stat;
public:
  Profile (std::string login_);//создание нового пользователя
  std::string get_login() const;
};