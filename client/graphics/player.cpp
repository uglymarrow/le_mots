#include "player.h"


/*!
    \class Player

    \brief Модель пользователя.
*/

Player::Player() :  m_login("")
{
}

std::string Player::login() const
{
    return m_login;
}

Stat Player::stat() const{
    return m_player_stat;
}

void Player::setLogin(std::string login)
{
    m_login = login;
}

std::string Player::password() const {
    return m_password;
}

void Player::setPassword(std::string password) {
    m_password = password;
}