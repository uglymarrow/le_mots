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

    std::pair<int, std::string> all_rooms();
    std::string create_room(std::string &name);
    std::string join_room(int);
    int is_ready();
    int get_winner();
    int check_word(std::string &str);
private:
    object const safly_read(std::string& json);

    Client client;
};