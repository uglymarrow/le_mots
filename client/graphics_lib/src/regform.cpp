#include "regform.h"
#include "player.h"
#include "ui_regform.h"

RegForm::RegForm(QWidget *parent) : QWidget(parent), ui(new Ui::RegForm) {
  ui->setupUi(this);
  ui->pasEdit->setEchoMode(QLineEdit::Password);
  ui->pasRepitEdit->setEchoMode(QLineEdit::Password);
  ui->mesLabel->hide();
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
  this->close();
  emit showAuthWindow();
}

void RegForm::setRating(float rating) {

}

void RegForm::on_regButton_clicked() {
  if (ui->pasEdit ->text()== ui->pasRepitEdit->text())
    emit showAfterReg();
  else
    ui->mesLabel->show();
}

void RegForm::on_logEdit_textChanged(const QString &text) {
  std::string buffer = text.toUtf8().constData();
  emit loginChanged(buffer);
}

void RegForm::on_pasEdit_textChanged(const QString &text) {
  std::string buffer = text.toUtf8().constData();
  emit passwordChanged(buffer);
}

