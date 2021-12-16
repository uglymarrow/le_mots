#include "player.h"

Player::Player(std::string login_): login(login_) {}

std::string Player::get_login() const {
    return login;
}