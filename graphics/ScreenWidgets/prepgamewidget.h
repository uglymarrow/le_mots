#ifndef PREPGAMEWIDGET_H
#define PREPGAMEWIDGET_H


class PrepGameWidget : public BaseWidget
{
public:
    PrepGameWidget();
    ~PrepGameWidget();

public slots:
    void create_room_clicked();
    void random_room_clicked();
    void create_room_list();

private:
    QLabel *header;

    ColoredButton *create_room;
    ColoredButton *random_room;

    QLabel *active_room;
    QFontBox *list;
};

#endif // PREPGAMEWIDGET_H
