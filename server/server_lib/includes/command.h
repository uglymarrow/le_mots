#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

class Command {
public:
    Command();

    bool login(std::string json, std::string& buf);

private:
    //Player user;
};