#include "../include/player.h"

/*!
    \class Player

    \brief Модель пользователя.
*/

Player::Player() : m_login("") {
}

std::string Player::login() const {
  return m_login;
}

double Player::stat() const {
  return m_player_stat.win_game / (m_player_stat.lose_game + m_player_stat.win_game);
}

  void Player::setLogin(std::string login) {
    m_login = login;
  }

  std::string Player::password() const {
    return m_password;
  }

  void Player::setPassword(std::string password) {
    m_password = password;
  }