#include "wordsform.h"
#include "ui_wordsform.h"

WordsForm::WordsForm(int id, QWidget *parent) : QWidget(parent), ui(new Ui::WordsForm) {
  ui->setupUi(this);
  this->setWindowTitle("Le mots");
  ui->listWidget->addItem(QString::number(id));
  ui->waitingLabel->hide();
  ui->waitnigHeader->hide();

  connect(ui->listWidget, &QListWidget::itemClicked, this, &WordsForm::listItemClicked);
}

WordsForm::~WordsForm() {
  delete ui;
}

std::string WordsForm::login() const {
//    return ui->logEdit->text().toUtf8().constData();
}

void WordsForm::setLogin(std::string login) {
//    ui->loginLabel->setText(QString::fromUtf8(login.data(), login.size()));
}

void WordsForm::on_exitButton_clicked() {
  this->close();
  emit showMenuAgain();
}

void WordsForm::listItemClicked(QListWidgetItem *item) {
  this->close();
  emit connectToRoom(item->text().toInt());
}

void WordsForm::on_createRoomButton_clicked() {
  ui->waitingLabel->show();
  ui->waitnigHeader->show();
//  this->close();
  emit showRoomWindow();
}