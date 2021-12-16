#ifndef WORDSFORM_H
#define WORDSFORM_H

#include <QWidget>
#include "iwiringview.h"
#include "../build/graphics/ui_wordsform.h"

namespace Ui {
    class WordsForm;
}

class WordsForm : public QWidget, public IWiringView
{
    Q_OBJECT
public:
    explicit WordsForm(QWidget *parent = 0);
    ~WordsForm();

    std::string login() const;
    void setLogin(std::string login);

    void setRating(float rating);


signals:
    void showMenu();

private:
    Ui::WordsForm *ui;

private slots:
    void on_exitButton_clicked();

    void showWindow();
    void hideWindow();

};

#endif // WORDSFORM_H
