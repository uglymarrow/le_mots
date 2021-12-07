#include <cstdlib>
#include <iostream>
#include <string>

class Command {
public:
    Command() {};

    bool login(std::string json, std::string* buf) {
        std::cout << json << std::endl;

        return false;
    }
};