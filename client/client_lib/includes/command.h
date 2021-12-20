#pragma once

#include "client.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/json.hpp>

#include "profile.h"

using namespace boost::json;

class Command {
public:
    Command(boost::asio::io_context &io_context);

    Profile login(const std::string& user, const std::string& password);

    std::string all_rooms();
    bool create_room(std::string &name);
    bool join_room(int);
private:
    object const safly_read(std::string& json);

    Client client;
};