#ifndef PLAYER_H
#define PLAYER_H

#include <string>

//struct Score
//{
//    int current_score = 0;
//    int sum_of_letters = 0;
//};

struct Stat{
  float win_game = 2;//для статистики пользователя
  float lose_game = 1;//для статистики пользователя
//  int games = 0;//для статистики пользователя
};

//реализация этой структуры должна быть на сервере (я надеюсь)
// struct Connect_player{
//   shared_ptr<Socket> socket;//новый сокет для каждого игрока, чтобы не было задрежки на обработку сообщений
//   Player player;
// }

//class Player {

//
//  int user_id;//можно использовать сокет вместо id
//  Score score_in_game;
//  bool ready = false;//проверка готовности

//public:
//  Player(string nickname_, string login_, string pass, int id, string ava)
//      : nickname(nickname_), login(login_), password(pass), user_id(id),
//        avatar(ava){};//создание нового пользователя

//  ~Player();//разорвать соединение, завершить сессию, записать новую статистику в бд

//  void is_exist();//отправка сообщения с просьбой посмотреть сервер на наличие в бд, бросим исключение при неудаче

//  void player_login();//отправка сообщения с полями пользователя на создание нового сокета и создание структуры для этого пользователя на сервере, вернем -1, при неудаче

//  Stat stat();//отправка сообщения серверу с просьбой получения статистики этого пользователя из бд

//  void join_room(int room_id);//отправка запроса на сервер для подключения к комнате, бросим исключение при неудаче, если не удалось создать комнату

//  void ready_(); //изменение готовности пользователя, отправка сообщения на сервер об изменении готовности, бросим исключение при неудаче

//  void send_word(const string& msg);//отправка введенного слова на сервер, бросим исключение при неудаче, если слово правильное, то изменим счет пользователя на сервере

//};





class Player
{


public:
    Player();

    std::string login() const;
    void setLogin(std::string login);

    std::string password() const;
    void setPassword(std::string password);

    Stat stat() const;
    void setStat(Stat stat);


private:

    std::string m_login;

    std::string m_nickname;
    std::string m_password;
    Stat m_player_stat;
};

#endif // PLAYER_H
