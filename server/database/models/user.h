#pragma once

#include "connect.h"
#include "player.h"

class User{
    public:

    User();
    ~User();

    User(const User&)=delete;
    User& operator=(const User&)=delete;

    Player login(const std::string& login, const std::string& password);
    
    Player sign_in(const std::string& login, const std::string& password);

    bool update_login(const std::string& login, const std::string& data);
    bool update_password(const std::string& login, const std::string& data);
    bool update_stat(const std::string& login, const int& games, const int& wins);
    
    bool update_field(const std::string& login, const std::string& field_name, const std::string& data); 

    bool is_exist(const std::string& login);

    private:

    std::string secure_pass(const std::string& pass);

    Connection_db* con;
};