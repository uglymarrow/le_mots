#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>
// #include "client.h"
//#include "ui_loginform.h"

namespace Ui {
class LoginForm;
}

class LoginForm : public QWidget {
 Q_OBJECT

 public:
  explicit LoginForm(QWidget *parent = 0);
  ~LoginForm();

  std::string login() const;
  void setLogin(std::string login);
  void setRating(float rating);

 signals:
  void showMenu();
  void showRegForm();
  // QApplication app(argc, argv);

  // PlayerPresenter *presenter = new PlayerPresenter();

  void loginChanged(std::string login);
  void passwordChanged(std::string pass);
 public slots:
  void showErrReg();

 private:
  Ui::LoginForm *ui;

 private slots:
  void on_logEdit_textChanged(const QString &text);
  void on_pasEdit_textChanged(const QString &text);

  void showWindow();
  void hideWindow();

  void on_logButton_clicked();
  void on_regButton_clicked();

};

#endif // LoginForm_H
