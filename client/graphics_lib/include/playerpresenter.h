#ifndef PLAYERPRESENTER_H
#define PLAYERPRESENTER_H

#include <QObject>
#include <QWidget>
#include <QTimer>
#include <QTime>
#include <string>
#include <map>
#include <thread>
#include <iostream>
#include "player.h"
#include "wordsform.h"
#include "menuform.h"
#include "regform.h"
#include "loginform.h"
#include "roomform.h"
#include "../../client_lib/includes/command.h"
#include "waitingform.h"
//#include "../include/profile.h"

// #include <boost/bind/bind.hpp>
// #include <boost/asio.hpp>
// #include <boost/json.hpp>

//class IWiringView;
//template<typename T>
//class QList;

class PlayerPresenter : public QObject {
 Q_OBJECT

 public:
  explicit PlayerPresenter(boost::asio::io_context &io_con, QObject *parent = 0);

 public:
  Command cl;

  void connectLogForm(LoginForm *log_form);
  void connectMenuForm(MenuForm *menu_form);
  void connectRegForm(RegForm *reg_form);
  void connectWordsForm(WordsForm *words_form);
  void connectRoomForm(RoomForm *room_form);


  Player *m_model;

 signals:
  void showErrorMes();
  void closeLogForm();
  void closeRegForm();
  void setWinner(std::string result);
  void successAdd();
  void failAdd();
  void closeWordsWindow();

 private slots:
  void processLoginChanged(std::string login);
  void processPasswordChanged(std::string login);
  void processShowMenu();
  void processShowMenuAgain();
  void processShowAuth();
  void processShowReg();
  void processShowWords();
  void processShowRoom();
  void processConnect(int _id);
  void processEndOfGame();
  void checkWord(std::string data);
  void connectToRoom();
  void processShowMyRoom(std::string game_word);
  void processShowAfterReg();

 private:
//  WaitingForm *words_f;
QThread *thread;
};

#endif // PLAYERPRESENTER_H
