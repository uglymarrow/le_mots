#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "button.h"
#include "loginwidget.h"
#include "mainwindow.h"

#include <QPushButton>
#include <QGridLayout>
#include <QStackedWidget>
#include <signal.h>
#include <QApplication>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    this->setWindowTitle("Le mots");

    setting_button = new Colored_Button("Другие настройки пользователя"/*, ui->centralWidget*/);
    stack = new QStackedWidget(ui->centralWidget);
    stack->addWidget(setting_button);

    words_button = new Colored_Button("Слова из слов", ui->centralWidget);
    connect(words_button, &Colored_Button::clicked, this, &MainWindow::on_word_clicked);

    grebeshok_button = new Colored_Button("Гребешок");
    first_sym_button = new Colored_Button("На одну букву");

//     QHBoxLayout *mainHLayout = new QHBoxLayout(ui->centralWidget);
//     mainHLayout->addWidget(words_button);
//     mainHLayout->addWidget(grebeshok_button);
//     mainHLayout->addWidget(first_sym_button);

}

MainWindow::~MainWindow() {
    delete ui;
    delete setting_button;
    delete words_button;
    delete grebeshok_button;
    delete first_sym_button;
    delete stack;
}

void MainWindow::on_word_clicked() {
    LoginWidget *log_wid = new LoginWidget(ui->centralWidget);
    stack->addWidget(log_wid);
    stack->setCurrentIndex(1);
}
