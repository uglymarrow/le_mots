#ifndef MENUFORM_H
#define MENUFORM_H

#include <QWidget>
#include "../build/graphics/ui_menu.h"
#include "iwiringview.h"

namespace Ui {
    class MenuForm;
}

class MenuForm : public QWidget, public IWiringView
{
     Q_OBJECT

public:
    explicit MenuForm(QWidget *parent = 0);
    ~MenuForm();

    std::string login() const;
    void setLogin(std::string login);
    void setRating(float rating);

signals:
    void showAuthWindow();
    void showWordsWindow();

private:
    Ui::MenuForm *ui;

private slots:
    void on_exitButton_clicked();
    void on_wordsButton_clicked();

    void showWindow();
    void hideWindow();
};

#endif // MENUFORM_H
