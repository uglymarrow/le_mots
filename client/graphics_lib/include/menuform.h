#ifndef MENUFORM_H
#define MENUFORM_H

#include <QWidget>
#include <string.h>

using std::string;

namespace Ui {
    class MenuForm;
}

class MenuForm : public QWidget
//    , public IWiringView
{
     Q_OBJECT

public:
    explicit MenuForm(const string log, const double stat, QWidget *parent = 0);
    ~MenuForm();

//    std::string login() const;
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
