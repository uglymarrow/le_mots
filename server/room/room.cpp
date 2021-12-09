#include "room.h"

Room& Room::operator=(const Room &s)
{
    name_of_room = s.name_of_room;
    password = s.password;
    room_id = s.room_id;
    creator = s.creator;
    for (auto i : s.players_in_room)
    {  
        players_in_room.insert(i);
    }
    return *this;
} 

std::map<int, class Player> Room::get_players()
{
    std::map<int, class Player> result = players_in_room;
    result.insert(std::make_pair(creator.get_id(), creator));
    return result;
}

void Room::view_players()
{
    std::map<int, class Player> result = players_in_room;
    result.insert(std::make_pair(creator.get_id(), creator));
    for (auto i : result)
    {
        std::cout << i.second.get_login() << std::endl;
    }
}

bool Room::add_player(const Player& new_player)
{
    if (players_in_room.size() < 3)
    {
        players_in_room.insert(std::make_pair(new_player.get_id(), new_player));
        return true;
    }
    else    
        return false;
}

bool Room::start_game()
{
    // int count_ready = 0;
    // std::map<int, class Player> result = players_in_room;
    // result.insert(std::make_pair(creator.get_id(), creator));
    // for (auto i : result)
    // {
    //     if (i.second.is_ready() == true)
    //     count_ready++;
    // }
    // std::cout << count_ready << " " << result.size();
    // if (count_ready == result.size())
    // {
    //     return true;
    // }
    // else    
    //     return false;
    return true;
}

Player Room::get_winner()
{
    std::map<int, class Player> result = players_in_room;
    result.insert(std::make_pair(creator.get_id(), creator));
    Player winner = result.begin()->second;
    int max_score = 0;
    for (auto i : result)
    {
        if (i.second.get_score().current_score > max_score)
        {
            max_score = i.second.get_score().current_score;
            winner = i.second;
        }
    }
    return winner;

}