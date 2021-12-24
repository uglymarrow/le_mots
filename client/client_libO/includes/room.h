/*#include <iostream>
#include <vector>
using namespace std;

class Room{
    string name_of_room;//название комнаты
    int room_id;//по id будем обращаться к определенной комнате 
    vector<Player> players_in_room;//для хранения списка пользователей в комнате и обработке игры

public:
    Room(string name, int id, Player first_player):name_of_room(name), room_id(id){
        players_in_room.push_back(first_player);
    };

    ~Room(); //отправка сообщения на сервер о распуске комнаты, когда count_players() == 0

    void start_game();//отправить сообщение на сервер о запуске игры

    void end_game();//получение от сервера сообщения с победителем, вывод сообщения на экран

    void is_exist();//отправка на сервер сообщения с просьбой проверить существующую комнату (для подключения по id)

    int count_players(); //количество игроков в комнате

};*/