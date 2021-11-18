#include "button.h"
#include <QString>

ColoredButton::ColoredButton(QString string, QWidget *parent):QPushButton(string, parent) {
    this->setStyleSheet("background-color:rgb(197, 188, 237)");
}

