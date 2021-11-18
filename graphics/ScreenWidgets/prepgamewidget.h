#ifndef PREPGAMEWIDGET_H
#define PREPGAMEWIDGET_H


class PrepGameWidget : public BaseWidget
{
public:
    PrepGameWidget();
    ~PrepGameWidget();
private:
    QLabel *header;

    ColoredButton *create_room;
    ColoredButton *random_room;

    QLabel *active_room;
    QFontBox *list;
};

#endif // PREPGAMEWIDGET_H
