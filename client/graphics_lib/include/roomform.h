#ifndef ROOMFORM_H
#define ROOMFORM_H

#include <QWidget>
#include <string>
#include <QTimer>
#include <QTime>
//#include "../build/graphics/ui_roomform.h"
//#include "iwiringview.h"

namespace Ui {
class RoomForm;
}

class RoomForm : public QWidget
{
 Q_OBJECT
 public:
  explicit RoomForm(std::string word, QWidget *parent = nullptr);
  ~RoomForm();

  std::string login() const;
  void setLogin(std::string login);

  void setRating(float rating);

 signals:
  void showWordsWindow();
  void endOfGame();
  void sendWord(std::string data);

 public slots:
  void setWinnerLabel(std::string name);
  void showSuccess();
  void showFail();

 private:
  Ui::RoomForm *ui;
  QTime *time;
  QTimer *timer;
  int iter = 0;

 private slots:
  void on_exitButton_clicked();
  void on_pushButton_clicked();

  void slotTimerAlarm();

  void showWindow();
  void hideWindow();
};

#endif // ROOMFORM_H
