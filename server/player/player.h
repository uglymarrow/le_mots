#include <iostream>
#include <memory>
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

struct Connect_player{
  shared_ptr<Socket> socket;
  Player player;
}

class Player { 
  string nickname;
  string login;
  string password;
  Stat player_stat;
  int user_id;//можно использовать сокет вместо id
  Score score_in_game;
  string avatar;
  bool ready = false;//проверка готовности

public:
  Player(string nickname_, string login_, string pass, int id, string ava)
      : nickname(nickname_), login(login_), password(pass), user_id(id),
        avatar(ava){};//создание нового пользователя, отправка его полей на сервер для записи в бд

  ~Player();//разорвать соединение, завершить сессию, записать новую статистику в бд 

  int is_exist();//проверка в бд на существование игрока, вернем -1, если такого игрока нет

  void player_login();//вход пользователя в игру, создание сокета для этого игрока, создание игрока на сервере с полученными из бд данными 

  Stat stat();//вывод статистики пользователя

  void join_room(int room_id);//подключение к комнате на сервере, добавление пользователя в список пользователей комнаты

  bool is_ready();//проверка готовности пользователя
  
};
