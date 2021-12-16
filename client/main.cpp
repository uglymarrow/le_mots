#include <string>

#include "command.h"
#include "player.h"

int main(int argc, char* argv[]) {
    try {
        boost::asio::io_context io_con;
        Command cl(io_con);
        Player pl = cl.login(std::string("BigNiger"), std::string("41df"));

        std::cout << pl.get_login() << std::endl;

        std::cout << cl.all_rooms() << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << "\n";
    }

    return 0;
}