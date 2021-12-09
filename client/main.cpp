#include <string>

#include "client.h"

int main(int argc, char* argv[]) {
    try {
        boost::asio::io_context io_con;
        Client cl(io_con);
        cl.connect(std::string("127.0.0.1"), std::string("8000"));
        std::cout << cl.login(std::string("anime"), std::string("41df")) << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << "\n";
    }

    return 0;
}