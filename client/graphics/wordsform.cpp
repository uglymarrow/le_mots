#include "wordsform.h"

WordsForm::WordsForm(QWidget *parent): QWidget(parent), ui(new Ui::WordsForm)
{
    ui->setupUi(this);
}

WordsForm::~WordsForm()
{
    delete ui;
}

std::string WordsForm::login() const
{
//    return ui->logEdit->text().toUtf8().constData();
}

void WordsForm::setLogin(std::string login)
{
//    ui->loginLabel->setText(QString::fromUtf8(login.data(), login.size()));
}

void WordsForm::showWindow() {
    this->show();
}

void WordsForm::hideWindow() {
    this->hide();
}

void WordsForm::on_exitButton_clicked() {
    hideWindow();
    emit showMenu();
}

void WordsForm::setRating(float rating) {

}
