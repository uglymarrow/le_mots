#ifndef BUTTON_H
#define BUTTON_H

#include <QPushButton>

class ColoredButton : public QPushButton
{
    Q_OBJECT
public:
    ColoredButton(QString string, QWidget *parent = 0);
    ~ColoredButton();

signals:

public slots:
};

#endif // BUTTON_H
