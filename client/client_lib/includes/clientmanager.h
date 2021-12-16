/*#pragma once

#include <string>

#include "client.h"

class Clientmanager {
public:
    //static Clientmanager* getInstance();
    //static Clientmanager* getInstance(boost::asio::io_context& io_con);

    bool login(std::string&, std::string&);

    void run();
private:
    //static Clientmanager* instance;
    Clientmanager(Client&);
};*/