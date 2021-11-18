#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QScreen>
#include <QMainWindow>
#include <QDir>
#include <QStackedWidget>

#include "button.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_word_clicked();

private slots:


private:
    Ui::MainWindow *ui;
    ColoredButton *setting_button;
    ColoredButton *words_button;
    ColoredButton *grebeshok_button;
    ColoredButton *first_sym_button;
    QStackedWidget *stack;
};

#endif // MAINWINDOW_H
