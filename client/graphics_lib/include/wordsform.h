#ifndef WORDSFORM_H
#define WORDSFORM_H

#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
class WordsForm;
}

class WordsForm : public QWidget {
 Q_OBJECT

 signals:
  void showMenuAgain();
  void showRoomWindow();
  void connectToRoom(int _id);

 public:
  explicit WordsForm(int id, QWidget *parent = 0);
  ~WordsForm();

  std::string login() const;
  void setLogin(std::string login);

  void setRating(float rating);

 private:
  Ui::WordsForm *ui;

 private slots:
  void on_exitButton_clicked();
  void on_createRoomButton_clicked();
  void listItemClicked(QListWidgetItem *item);
};

#endif // WORDSFORM_H
