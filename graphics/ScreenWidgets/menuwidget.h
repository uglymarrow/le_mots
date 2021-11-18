#ifndef MENUWIDGET_H
#define MENUWIDGET_H


class MenuWidget : public BaseWidget
{
public:
    MenuWidget();
    ~MenuWidget();
public slots:
    void words_button_clicked();
    void grebeshok_button_clicked();
    void first_let_button_clicked();
    void ready_button_clicked();

private:
    QLabel *header;
    QLabel *username;
    QLabel *score;
    QLabel *choose_label;

    ColoredButton *words_button;
    ColoredButton *grebeshok_button;
    ColoredButton *first_let_button;
    ColoredButton *ready_button;

    QLabel *info;
    QLineEdit *id_edit;
};

#endif // MENUWIDGET_H
