#include "../include/roomform.h"
#include "ui_roomform.h"

//переделать конструктор
RoomForm::RoomForm(std::string word, QWidget *parent)
    : QWidget(parent), ui(new Ui::RoomForm) {
  ui->setupUi(this);

  ui->msgLabel->hide();
  ui->exLabel->hide();
  ui->returnButton->hide();
  ui->winnerLabel->hide();

  this->setWindowTitle("Le mots");

  time = new QTime(0, 1, 0);
  timer = new QTimer();
  connect(timer, SIGNAL(timeout()), this, SLOT(slotTimerAlarm()));

  ui->timeLabel->setText(time->toString("m:ss"));
  ui->roundWord->setText(QString::fromUtf8(word.data(), word.size()));
  showWindow();

  timer->start(1000);
}

RoomForm::~RoomForm() {
  delete ui;
}

std::string RoomForm::login() const {
//    return ui->logEdit->text().toUtf8().constData();
}

void RoomForm::setLogin(std::string login) {
//    ui->loginLabel->setText(QString::fromUtf8(login.data(), login.size()));
}

void RoomForm::showWindow() {
  this->show();
}

void RoomForm::hideWindow() {
  this->hide();
}

void RoomForm::on_exitButton_clicked() {
  this->close();
  emit showWordsWindow();
}

void RoomForm::setRating(float rating) {

}

void RoomForm::slotTimerAlarm() {
  iter++;
  ui->timeLabel->setText((time->addSecs(-1 * iter)).toString("m:ss"));
  if (time->addSecs(-1 * iter).toString("m:ss") == "0:00") {
    timer->stop();
    ui->timeLabel->setText(QString("Время кончилось"));

    ui->exLabel->show();
    ui->returnButton->show();

    emit endOfGame();
  }
}

void RoomForm::setWinnerLabel(std::string name) {
//  QWidget* winWidget = new QWidget;
//  winWidget->setFixedSize(645, 510);
//  QLabel* name_of_winner = new QLabel;
//  QPushButton* returnButton = new QPushButton;
//
//  this->hideWindow();
//
//  name_of_winner->setGeometry(100, 50, 15, 20);
//  name_of_winner->setText(QString::fromUtf8(name.data(), name.size()));
//  returnButton->setText("Выход");
//
//  winWidget->show();
//  name_of_winner->show();
//  returnButton->show();
QString buf = "";
  if (name != "Победила дружба!")
    buf = QString("        Победил игрок ") + QString::fromUtf8(name.data(), name.size());
  else
    buf = QString::fromUtf8(name.data(), name.size());

  ui->winnerLabel->setText(buf);
  ui->winnerLabel->show();
}

void RoomForm::on_pushButton_clicked() {
  std::string buffer = ui->lineEdit->text().toStdString();
  emit sendWord(buffer);
}

void RoomForm::showSuccess() {
  ui->playersWords->appendPlainText(ui->lineEdit->text());
  ui->lineEdit->clear();
}

void RoomForm::showFail() {
  ui->msgLabel->show();
//  ui->lineEdit->clear();
}

void RoomForm::on_returnButton_clicked() {
  this->close();
  emit showWordsWindow();
}

void RoomForm::on_lineEdit_textChanged() {
  ui->msgLabel->hide();
}