#ifndef REGFORM_H
#define REGFORM_H

#include <QWidget>

namespace Ui {
class RegForm;
}

class RegForm : public QWidget {
 Q_OBJECT
 public:
  explicit RegForm(QWidget *parent = 0);
  ~RegForm();

  std::string login() const;
  void setLogin(std::string login);

  void setRating(float rating);

//    std::string password() const;
//    void setPassword(std::string password);

 signals:
  void showAuthWindow();
  void showAfterReg();
  void loginChanged(std::string login);
  void passwordChanged(std::string pass);


 public:
  Ui::RegForm *ui;

 public slots:
  void on_logEdit_textChanged(const QString &text);
  void on_pasEdit_textChanged(const QString &text);
  void on_exitButton_clicked();
  void on_regButton_clicked();

  void showWindow();
  void hideWindow();
};

#endif // REGFORM_H
