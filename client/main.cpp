#include <QApplication>

// #include "./graphics/playerpresenter.h"
#include "playerpresenter.h"


int main(int argc, char* argv[]) {

    QApplication app(argc, argv);
    PlayerPresenter *presenter = new PlayerPresenter();

    return app.exec();
    // return 0;
}