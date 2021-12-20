#pragma once 
#include "room.h"
#include "connect.h"
#include "user.h"
#include "word.h"
#include <iostream>
#include <map>

class Game_manager{
    public:

    ~Game_manager();

    static Game_manager* get_instance();

    std::map<int, class Room> view_all_rooms();

    std::pair<int, string> create_room(const std::string& name, const Player& creator, const std::string& password = "-");

    int add_player(const std::string& login, const std::string& password);//returns id

    std::map<int, Player> view_all_players();

    int count_rooms();//для определения id комнаты

    bool is_login(const int& id);

    bool is_room(const int& id);

    bool update_stat(const int& id, const Stat& stat);

    bool check_answer(const int& id, const std::string& word);

    bool join_room(const int& player_id, const int& room_id);

    Player* get_player(const int& id);

    Room* get_room(const int& id);

    Player login(const string& login, const string& password);

    std::string get_word();

    bool check_answer(const int& login_id, const int& room_id, const std::string& word);

    // std::vector<Room_grebeshok> view_rooms_grebeshok(); //показать все комнаты в "игре гребешок"

    // std::vector<Room_words> view_rooms_words(); //показать все комнаты в игре "слова из слов"

    // std::vector<Room_one_letter> view_rooms_one_letter(); //показать все комнаты в игре "одна буква"

    // std::vector<Connect_player> view_players(); //показать всех игроков в игре

    // void add_room_grebeshok(const Room_grebeshok& added_room); //добавить комнату в список комнат при создании комнаты

    // void add_room_words(const Room_words& added_room);

    // void add_room_one_letter(const RoRoom_one_letterom& added_room);

    // void add_player(const Connect_player& added_player); //добавить игрока в список игроков при входе игрока в сеть

    void run_game();
    
    private:

    static Game_manager* instance;

    // User model_user;

    // Word model_word;
    
    Game_manager(){};

    std::map<int, class Room> rooms;

    std::map<int, class Player> players;

    // User mod_user;
    // std::vector<Room_grebeshok> rooms;//вектор для хранения комнат "игры гребешок"
    // std::vector<Room_words> rooms;//вектор для хранения комнат игры "слова из слов"
    // std::vector<Room_one_letter> rooms;//вектор для хранения комнат "игры одна буква"
    // std::vector<Connect_player> connect_players;//для хранения игроков, которые не зашли в комнату
};