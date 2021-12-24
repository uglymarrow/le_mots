#include "player.h"

Stat Player::get_stat() const
{
    return this->player_stat;
}


bool Player::is_ready() const
{
    return this->ready;
}

void Player::get_ready()
{
    this->ready = true;
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
    return *this;
} 

void Player::refresh_score()
{
    score_in_game.current_score += 1;
}



