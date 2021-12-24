#include "../include/regform.h"
#include "ui_regform.h"

RegForm::RegForm(QWidget *parent) : QWidget(parent), ui(new Ui::RegForm) {
  ui->setupUi(this);
  ui->pasEdit->setEchoMode(QLineEdit::Password);
  ui->pasRepitEdit->setEchoMode(QLineEdit::Password);
  this->setWindowTitle("Le mots");
  showWindow();
}

RegForm::~RegForm() {
  delete ui;
}

std::string RegForm::login() const {
  return ui->logEdit->text().toUtf8().constData();
}

void RegForm::setLogin(std::string login) {
//    ui->loginLabel->setText(QString::fromUtf8(login.data(), login.size()));

}

void RegForm::showWindow() {
  this->show();
}

void RegForm::hideWindow() {
  this->hide();
}

void RegForm::on_exitButton_clicked() {
  hideWindow();
  emit showAuthWindow();
}

void RegForm::setRating(float rating) {

}

