

class Creator:public Player{
public:
    void create_room(const int& room_id);//удалось ли создать комнату или нет, бросим исключение при неудаче

    void delete_player(const int& player_id);//удаление игрока из комнаты,  бросим исключение при неудаче
};