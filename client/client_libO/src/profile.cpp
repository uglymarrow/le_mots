#include "profile.h"

Profile::Profile(std::string login_): login(login_) {}

std::string Profile::get_login() const {
    return login;
}