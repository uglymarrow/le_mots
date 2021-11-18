#ifndef AUTHWIDGET_H
#define AUTHWIDGET_H

#include <QLineEdit>

#include "../button.h"

class AuthWidget : public BaseWidget {
public:
    AuthWidget();
    ~AuthWidget();

public slots:
    void reg_button_clicked();
    void return_button_clicked();

private:
    QLineEdit *nickname;
    QLineEdit *login;
    QLineEdit *password;
    QLineEdit *repeat_pass;
    Colored_Button *reg_button;
    Colored_Button *return_button;
};

#endif // AUTHWIDGET_H
