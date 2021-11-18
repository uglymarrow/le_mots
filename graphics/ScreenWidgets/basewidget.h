#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include <QWidget>

class BaseWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BaseWidget(QWidget *parent = nullptr);
    ~BaseWidget();
protected:
    void clearWidget();
};

#endif // BASEWIDGET_H
