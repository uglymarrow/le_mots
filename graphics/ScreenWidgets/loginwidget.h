#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H


class LoginWidget : public BaseWidget
{
public:
    LoginWidget();
    ~LoginWidget();

public slots:
    void login_button_clicked();
    void reg_button_clicked();
    void exit_button_clicked();

private:
    QLineEdit *login;
    QLineEdit *password;
    Colored_Button *login_button;
    Colored_Button *reg_button;
    Colored_Button *exit_button;
};

#endif // LOGINWIDGET_H
