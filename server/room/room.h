#include <iostream>
#include <vector>
using namespace std;

class Room{
    string name_of_room;//название комнаты
    int room_id;//по id будем обращаться к определенной комнате 
    vector<Connect_player> players_in_room;//для хранения списка пользователей в комнате и обработке игры
    Connect_creator creator_of_room;
public:
    Room(){};

    Room(string name, int id, Connect_creator creator):name_of_room(name), room_id(id), creator_of_room(creator){
    };

    ~Room(){}; //распускаение комнаты, когда current_number == 0

    int start_game();//запустить игру, когда все пользователи готовы, включить таймер, отослать клиенту ключевое слово 

    int end_game();//по окончанию таймера запускается данный метод, который отсылает клиенту сигнал о завершении

    int is_exist();//существует ли комната, проверка на наличие уже такой комнаты на сервере

    void add_player(const Connect_player& new_player);//добавление игрока в комнату

    int number_of_players();//количество игроков в комнате
};