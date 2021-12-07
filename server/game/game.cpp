#include <cstdlib>
#include <iostream>
#include <vector>

struct session
{
    
};


class Game {
    vector<Room_grebeshok> rooms;//вектор для хранения комнат "игры гребешок"
    vector<Room_words> rooms;//вектор для хранения комнат игры "слова из слов"
    vector<Room_one_letter> rooms;//вектор для хранения комнат "игры одна буква"
    vector<session> connect_players;//для хранения игроков, которые не зашли в комнату

    public:
    Game();
    ~Game();

    void add_player(session &added_player){
        connect_players.push_back(added_player);
    }; //добавить игрока в список игроков при входе игрока в сеть
};