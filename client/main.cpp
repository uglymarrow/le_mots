#include <QApplication>

#include "graphics_lib//include/playerpresenter.h"


int main(int argc, char* argv[]) {

    QApplication app(argc, argv);
    boost::asio::io_context io_con;
    PlayerPresenter *presenter = new PlayerPresenter(io_con);

    return app.exec();
    // return 0;
}