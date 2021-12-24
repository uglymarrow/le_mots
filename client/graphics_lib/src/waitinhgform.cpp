#include "waitingform.h"
#include "ui_waitingform.h"

WaitingForm::WaitingForm(QWidget *parent) : QWidget(parent), ui(new Ui::WaitingForm) {
  ui->setupUi(this);
  this->setWindowTitle("Le mots");
}

WaitingForm::~WaitingForm() {
  delete ui;
}

