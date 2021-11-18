

class Game{
    vector<Room_grebeshok> rooms;//вектор для хранения комнат "игры гребешок"
    vector<Room_words> rooms;//вектор для хранения комнат игры "слова из слов"
    vector<Room_one_letter> rooms;//вектор для хранения комнат "игры одна буква"
    vector<Connect_player> connect_players;//для хранения игроков, которые не зашли в комнату

    public:
    Game();
    ~Game();

    vector<Room_grebeshok> view_rooms_grebeshok(); //показать все комнаты в "игре гребешок"

    vector<Room_words> view_rooms_words(); //показать все комнаты в игре "слова из слов"

    vector<Room_one_letter> view_rooms_one_letter(); //показать все комнаты в игре "одна буква"

    vector<Connect_player> view_players(); //показать всех игроков в игре

    void add_room_grebeshok(const Room_grebeshok& added_room); //добавить комнату в список комнат при создании комнаты

    void add_room_words(const Room_words& added_room);

    void add_room_one_letter(const RoRoom_one_letterom& added_room);

    void add_player(const Connect_player& added_player); //добавить игрока в список игроков при входе игрока в сеть
};