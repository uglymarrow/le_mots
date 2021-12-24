#include "../include/menuform.h"
#include "ui_menu.h"

MenuForm::MenuForm(const string log, const double stat, QWidget *parent) :
    QWidget(parent), ui(new Ui::MenuForm) {
  ui->setupUi(this);
  this->setWindowTitle("Le mots");
  std::string logbuf = log;
  ui->loginLabel->setText(QString::fromUtf8(logbuf.data(), logbuf.size()));
//  ui->ratingLabel->setText(QString::number(stat, 'f', 1) );
}

MenuForm::~MenuForm() {
  delete ui;
}

void MenuForm::on_exitButton_clicked() {
  this->close();
  emit showAuthWindow();
}

void MenuForm::on_wordsButton_clicked() {
  this->close();
  emit showWordsWindow();
}

//std::string MenuForm::login() const {
//
//}

void MenuForm::setLogin(std::string login) {
  ui->loginLabel->setText(QString::fromUtf8(login.data(), login.size()));
}

void MenuForm::setRating(float rating) {
//  ui->ratingLabel->setText(QString::number(rating, 'f', 1));
}

void MenuForm::showWindow() {
  this->show();
}

void MenuForm::hideWindow() {
  this->hide();
}
