#include "../include/playerpresenter.h"

/*!
    \class PlayerPresenter

    "Представитель" в триаде MVP 
*/

PlayerPresenter::PlayerPresenter(boost::asio::io_context &io_con, QObject *parent)
    : QObject(parent), m_model(new Player), cl(io_con) {
  processShowAuth();
}

void PlayerPresenter::processLoginChanged(std::string text) {
  if (text != m_model->login()) {
    m_model->setLogin(text);
//    refreshView();
  }
}

void PlayerPresenter::processPasswordChanged(std::string text) {
  if (text != m_model->password()) {
    m_model->setPassword(text);
//    refreshView();
  }
}

void PlayerPresenter::processShowMenu() {
//  отправить запрос серверу
  try {
    // boost::asio::io_context io_con;
    // cl(io_con);
    // cl.connect(std::string("127.0.0.1"), std::string("8000"));

    // boost::asio::io_context io_con;
    // Command cl(io_con);
    cl.login(m_model->login(), m_model->password());
    // m_viewList.at(0)->hideWindow();

    MenuForm *menu_f = new MenuForm(m_model->login(), m_model->stat());
    connectMenuForm(menu_f);
    menu_f->show();
    emit closeLogForm();

//     m_viewList.at(1)->showWindow();
//        refreshView();
  } catch (std::exception &e) {
    emit showErrorMes();
    std::cout << "Exception: " << e.what() << "\n";
  }
}

void PlayerPresenter::processShowMenuAgain() {
  MenuForm *menu_f = new MenuForm(m_model->login(), m_model->stat());
  connectMenuForm(menu_f);
  menu_f->show();
}

void PlayerPresenter::processShowAuth() {
  LoginForm *login_f = new LoginForm();
  connectLogForm(login_f);
  login_f->show();
}

void PlayerPresenter::processShowReg() {
  RegForm *reg_f = new RegForm();
  connectRegForm(reg_f);
  reg_f->show();
//  refreshView();
}

void PlayerPresenter::processShowWords() {
  std::pair<int, std::string> rooms_p = cl.all_rooms();
  int room_name = std::get<0>(rooms_p);
  WordsForm *words_f = new WordsForm(room_name);
  connectWordsForm(words_f);
  words_f->show();
}

//создание комнаты
void PlayerPresenter::processShowRoom() {
  WaitingForm *waiting_f = new WaitingForm();
  waiting_f->show();
  connectToRoom();
}

void connectToRoom(std::string data) {
  std::string buffer = m_model->login();

  try {
    std::string first_word = cl.create_room(data);
    //// attention
    while (cl.is_ready() == 0) {
      sleep(5);
    };
    RoomForm *room = new RoomForm(first_word);
    connectRoomForm(room);
    room->show();
  } catch (std::exception &e) {
    std::cout << "Exception: " << e.what() << "\n";
  }
}

void PlayerPresenter::processConnect(int _id) {
  RoomForm *room = new RoomForm(cl.join_room(_id));
  connectRoomForm(room);
  room->show();
}

void PlayerPresenter::processEndOfGame() {
  std::string result = cl.get_winner();
  emit setWinner(result);
}

void PlayerPresenter::checkWord(std::string data) {
  if (cl.check_word(data))
      emit successAdd();
  else
      emit failAdd();
}

void PlayerPresenter::connectLogForm(LoginForm *log_form) {
  QObject *view_obj = dynamic_cast<QObject *>(log_form);

  QObject::connect(view_obj, SIGNAL(loginChanged(std::string)),
                   this, SLOT(processLoginChanged(std::string)));

  QObject::connect(view_obj, SIGNAL(passwordChanged(std::string)),
                   this, SLOT(processPasswordChanged(std::string)));

  QObject::connect(view_obj, SIGNAL(showMenu()), this, SLOT(processShowMenu()));
  QObject::connect(view_obj, SIGNAL(showRegForm()), this, SLOT(processShowReg()));
  QObject::connect(this, SIGNAL(showErrorMes()), view_obj, SLOT(showErrReg()));
  QObject::connect(this, SIGNAL(closeLogForm()), view_obj, SLOT(close()));
}

void PlayerPresenter::connectMenuForm(MenuForm *menu_form) {
  QObject *view_obj = dynamic_cast<QObject *>(menu_form);
  QObject::connect(view_obj, SIGNAL(showAuthWindow()), this, SLOT(processShowAuth()));
  QObject::connect(view_obj, SIGNAL(showWordsWindow()), this, SLOT(processShowWords()));
}

void PlayerPresenter::connectRegForm(RegForm *reg_form) {
  QObject *view_obj = dynamic_cast<QObject *>(reg_form);
  QObject::connect(view_obj, SIGNAL(showAuthWindow()), this, SLOT(processShowAuth()));
}

void PlayerPresenter::connectWordsForm(WordsForm *words_form) {
  QObject *view_obj = dynamic_cast<QObject *>(words_form);
  QObject::connect(view_obj, SIGNAL(showRoomWindow()), this, SLOT(processShowRoom()));
  QObject::connect(view_obj, SIGNAL(showMenuAgain()), this, SLOT(processShowMenuAgain()));
  QObject::connect(view_obj, SIGNAL(connectToRoom(int)), this, SLOT(processConnect(int)));
}

void PlayerPresenter::connectRoomForm(RoomForm *room_form) {
  QObject *view_obj = dynamic_cast<QObject *>(room_form);
  QObject::connect(view_obj, SIGNAL(endOfGame()), this, SLOT(processEndOfGame()));
  QObject::connect(view_obj, SIGNAL(showWordsWindow()), this, SLOT(processShowWords()));
  QObject::connect(this, SIGNAL(setWinner(std::string)), view_obj, SLOT(setWinnerLabel(std::string)));
  QObject::connect(view_obj, SIGNAL(sendWord(std::string)), this, SLOT(checkWord(std::string)));
  QObject::connect(this, SIGNAL(successAdd()), view_obj, SLOT(showSuccess()));
  QObject::connect(this, SIGNAL(failAdd()), view_obj, SLOT(showFail()));
}
