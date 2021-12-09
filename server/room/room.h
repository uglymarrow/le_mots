#pragma once
#include <iostream>
#include <vector>
#include "player.h"
#include <map>
using namespace std;

class Room{
private:
    std::string name_of_room;//название комнаты
    int room_id;//по id будем обращаться к определенной комнате 
    std::string password = "-";
    Player creator;
    std::map<int, class Player> players_in_room;
public:
    Room(){};

    Room(const std::string& name_, const int& id, const Player& first) 
    : name_of_room(name_), room_id(id), creator(first)
    {};

    Room(const std::string& name_, const std::string& pass, int id,  const Player& first) 
    : name_of_room(name_), password(pass), room_id(id), creator(first)
    {};

    Room(const Room &s):name_of_room(s.name_of_room), room_id(s.room_id), password(s.password),
    creator(s.creator), players_in_room(s.players_in_room){};

    Room& operator=(const Room &s); 

    Room* get_room() const {};

    ~Room(){}; //распускаение комнаты, когда current_number == 0

    bool start_game();//запустить игру, когда все пользователи готовы, включить таймер, отослать клиенту ключевое слово 

    int end_game();//по окончанию таймера запускается данный метод, который отсылает клиенту сигнал о завершении

    int is_exist();//существует ли комната, проверка на наличие уже такой комнаты на сервере

    bool add_player(const Player& new_player);//добавление игрока в комнату

    int number_of_players();//количество игроков в комнате

    Player get_creator(){return creator;};

    std::map<int, class Player> get_players();

    std::string get_name() const {return name_of_room;};

    int get_id() const {return room_id;};

    void view_players();

    Player get_winner();
};

