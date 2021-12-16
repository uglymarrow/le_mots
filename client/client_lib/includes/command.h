#pragma once

#include "client.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/json.hpp>

#include "player.h"

using namespace boost::json;

class Command {
public:
    Command(boost::asio::io_context &io_context);

    Player login(const std::string& user, const std::string& password);

    std::string all_rooms();
private:
    Client client;
};