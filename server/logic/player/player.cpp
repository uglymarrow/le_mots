#include "player.h"

Stat Player::get_stat() const
{
    return player_stat;
}


bool Player::is_ready() const
{
    return ready;
}

void Player::get_ready()
{
    ready = true;
}

std::string Player::get_login() const
{
    return login;
}

std::string Player::get_pass() const
{
    return password;
}

int Player::get_id() const
{
    return id;
}

Score Player::get_score()
{
    return score_in_game;
}

Player& Player::operator=(const Player &s)
{
    login = s.login;
    password = s.password;
    player_stat = s.player_stat;
    id = s.id;
    ready = s.ready;
    score_in_game = s.score_in_game;
    words = s.words;
    return *this;
} 

void Player::refresh_score()
{
    score_in_game.current_score += 1;
}

bool Player::add_word(const string& new_word)
{
    if (find(words.begin(), words.end(), new_word) == words.end())
    {
        words.push_back(new_word);
        return true;
    }
    else return false;
}



