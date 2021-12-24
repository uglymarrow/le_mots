#pragma once
#include <iostream>
#include <vector>
#include "../player/player.h"
#include <map>
using namespace std;

class Room{
private:
    std::string name_of_room;//название комнаты
    int room_id;//по id будем обращаться к определенной комнате 
    std::string password = "-";
    Player creator;
    int size = 0;
    Player opp;
    std::string nickname;
public:
    Room(){};

    Room(const std::string& name_, const int& id, const Player& first) 
    : name_of_room(name_), room_id(id), creator(first)
    {};

    Room(const std::string& name_, const std::string& pass, const int& id,  const Player& first) 
    : name_of_room(name_), room_id(id), password(pass),  creator(first)
    {};

    Room(const std::string& name_, const int& id, const Player& first, const Player& second) 
    : name_of_room(name_), room_id(id), creator(first), opp(second)
    {};

    Room(const Room &s):name_of_room(s.name_of_room), room_id(s.room_id), password(s.password),
    creator(s.creator), opp(s.opp), nickname(s.nickname){};

    Room& operator=(const Room &s); 

    Room* get_room() {return this;};

    ~Room(){}; //распускаение комнаты, когда current_number == 0

    bool start_game();//запустить игру, когда все пользователи готовы, включить таймер, отослать клиенту ключевое слово 

    int end_game();//по окончанию таймера запускается данный метод, который отсылает клиенту сигнал о завершении

    // int is_exist();//существует ли комната, проверка на наличие уже такой комнаты на сервере

    bool add_player(const Player& nick);//добавление игрока в комнату

    int number_of_players();//количество игроков в комнате

    Player get_creator() {return creator;};

    std::pair<Player, Player> get_players();

    std::string get_name() const {return name_of_room;};

    int get_id() const {return room_id;};

    std::string get_winner();

    void print_players();

    std::string get_opp_nick();

    Player* get_player_id(const int& id);
};

