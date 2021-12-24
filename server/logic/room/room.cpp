#include "room.h"

Room& Room::operator=(const Room &s)
{
    name_of_room = s.name_of_room;
    password = s.password;
    room_id = s.room_id;
    creator = s.creator;
    opp = s.opp;
    winner = s.winner;
    return *this;
} 

std::pair<Player*, Player*> Room::get_players()
{
    return std::make_pair(creator, opp);
}

Player* Room::get_player_id(const int& id)
{
    if (opp->get_id() == id)
        return opp;
    else {
        return creator;
    }
}

std::string Room::get_word()
{
    return main_word;
}

void Room::change_word(const std::string& new_word)
{
    main_word = new_word;
}

std::string Room::add_player(Player* new_one)
{
    if (size == 1)
    {
        opp = new_one;
        size++;
        return main_word;
    }
    else    
    {
    return "error";
    }
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

bool Room::is_ready()
{
    if (size == 1)
        return true;
    else return false;
}

std::string Room::get_winner()
{
    if (creator->get_score().current_score > opp->get_score().current_score)
        return creator->get_login();
    else if (creator->get_score().current_score < opp->get_score().current_score)
        return opp->get_login();
    else return "Победила дружба!";
}