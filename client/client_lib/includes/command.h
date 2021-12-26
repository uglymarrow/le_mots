#pragma once

#include "client.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/json.hpp>

#include "profile.h"

using namespace boost::json;

struct Stats {
    int win_game = 0;//для статистики пользователя
    int lose_game = 0;//для статистики пользователя
    int games = 0;//для статистики пользователя
};

class Command {
public:
    Command(boost::asio::io_context &io_context);

    Profile login(const std::string& user, const std::string& password);
    Profile reg(const std::string& user, const std::string& password);

    std::map<int, std::string> all_rooms();
    std::pair<int, std::string> create_room(std::string &name);
    std::string join_room(int);
    int is_ready();
    std::string get_winner();
    Stats get_stats();
    int check_word(std::string &str);
private:
    object const safly_read(std::string& json);

    Client client;
};