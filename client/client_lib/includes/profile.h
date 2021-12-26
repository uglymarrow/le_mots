#pragma once

#include <string>

class Profile {
  std::string login;
public:
  Profile (std::string login_);//создание нового пользователя
  std::string get_login() const;
};