#pragma once 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Score
{
    int current_score = 0;
    int sum_of_letters = 0;
};

struct Stat{
  int win_game = 0;//для статистики пользователя
  int lose_game = 0;//для статистики пользователя
  int games = 0;//для статистики пользователя
};

class Player { 
  
public:

  Player(){};
  
  Player(std::string login_, std::string pass, int id_, Stat cur_stat)
      : login(login_),password(pass), player_stat(cur_stat),  id(id_), 
        score_in_game(){};//создание нового пользователя, отправка его полей на сервер для записи в бд

  Player(const Player& player):login(player.login), password(player.password),
      player_stat(player.player_stat), id(player.id),
      score_in_game(player.score_in_game) {};

  Player& operator=(const Player &s); 

  ~Player(){};//разорвать соединение, завершить сессию, записать новую статистику в бд 

  Stat get_stat() const;//вывод статистики пользователя

  bool is_ready() const;//проверка готовности пользователя

  void refresh_score();

  void get_ready();

  int get_id() const; 

  Score get_score();

  std::string get_login() const;

  std::string get_pass() const;

  bool add_word(const string& new_word);

private:

  std::string login;

  std::string password;

  Stat player_stat;

  int id;

  Score score_in_game;

  bool ready = true;//проверка готовности

  vector<std::string> words;

  // Room* main_room = nullptr;
};

