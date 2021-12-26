#include "server.h"

int main(int argc, char* argv[]) {
    try {
        //Database* test = Database::getInstance();
        //test->connect("tcp://127.0.0.1:3306", "login", "kFBrpvet");
        Server s;

        s.run();
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}