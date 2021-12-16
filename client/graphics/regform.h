#ifndef REGFORM_H
#define REGFORM_H

#include <QWidget>
#include "../build/graphics/ui_regform.h"
#include "iwiringview.h"

namespace Ui {
    class RegForm;
}

class RegForm : public QWidget, public IWiringView
{
     Q_OBJECT
public:
    explicit RegForm(QWidget *parent = 0);
    ~RegForm();

    std::string login() const;
    void setLogin(std::string login);

    void setRating(float rating);

//    std::string password() const;
//    void setPassword(std::string password);

signals:
    void showAuthWindow();

private:
    Ui::RegForm *ui;

private slots:
    void on_exitButton_clicked();

    void showWindow();
    void hideWindow();
};

#endif // REGFORM_H
