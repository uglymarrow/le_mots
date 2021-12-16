#include <QDebug>
#include "loginform.h"

/*!
    \class LoginForm

    Представление (View) в триаде MVP .
*/

LoginForm::LoginForm(QWidget *parent)
    : QWidget(parent), ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    setFixedSize(size());
}

LoginForm::~LoginForm()
{
    delete ui;
}

std::string LoginForm::login() const
{
    return ui->logEdit->text().toUtf8().constData();
}

void LoginForm::setLogin(std::string login)
{
    ui->logEdit->setText(QString::fromUtf8(login.data(), login.size()));
}

void LoginForm::on_logEdit_textChanged(const QString &text)
{
    std::string buffer = text.toUtf8().constData();
    emit loginChanged(buffer);
}

void LoginForm::on_pasEdit_textChanged(const QString &text)
{
    std::string buffer = text.toUtf8().constData();
    emit passwordChanged(buffer);
}


void LoginForm::on_logButton_clicked()
{
  emit showMenu();
}

void LoginForm::showWindow() {
    this->show();
}

void LoginForm::hideWindow() {
    this->hide();
}

void LoginForm::on_regButton_clicked() {
    emit showRegForm();
}

void LoginForm::setRating(float rating) { }
