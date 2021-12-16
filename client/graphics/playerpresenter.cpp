#include <QList>
#include "playerpresenter.h"

/*!
    \class PlayerPresenter

    "Представитель" в триаде MVP расчета электропроводки.
*/

PlayerPresenter::PlayerPresenter(QObject *parent)
    : QObject(parent), m_model(new Player)
{
    LoginForm *view1 = new LoginForm();
    RegForm *reg = new RegForm();
    MenuForm *menu = new MenuForm();
    this->appendView(view1);
    this->appendView(reg);
    this->appendView(menu);
    view1->show();
}

/*!
    Добавить представление \a view.
*/
void PlayerPresenter::appendView(IWiringView *view)
{
//    if (m_viewList.contains(view))
//        return;
    m_viewList.push_back(view);
    QObject *view_obj = dynamic_cast<QObject*>(view);

    QObject::connect(view_obj, SIGNAL(loginChanged(std::string)),
                     this, SLOT(processLoginChanged(std::string)));

    QObject::connect(view_obj, SIGNAL(passwordChanged(std::string)),
                     this, SLOT(processPasswordChanged(std::string)));

    QObject::connect(view_obj, SIGNAL(showMenu()), this, SLOT(processShowMenu()));
    QObject::connect(view_obj,SIGNAL(showAuthWindow()), this, SLOT(processShowAuth()));
    QObject::connect(view_obj,SIGNAL(showRegForm()), this, SLOT(processShowReg()));
    QObject::connect(view_obj,SIGNAL(showWordsWindow()), this, SLOT(processShowWords()));

    refreshView(view);
}

/*!
    Обновить представление \a view.
*/
void PlayerPresenter::refreshView(IWiringView *view) const
{
    view->setLogin(m_model->login());
    Stat buf_stat = m_model->stat();
    if (buf_stat.win_game + buf_stat.lose_game <= 0) {
        view->setRating(0);
    } else {
        float rating = m_model->stat().win_game / (m_model->stat().win_game + m_model->stat().lose_game);
        view->setRating(rating);
    }

}

/*!
    Обновить все представления в списке презентера.
*/

void PlayerPresenter::refreshView() const
{
    for (std::vector<IWiringView*>::const_iterator it = m_viewList.begin();
    it != m_viewList.end(); ++it) {
        refreshView(*it);
    }
}


void PlayerPresenter::processLoginChanged(std::string text) {
    if (text != m_model->login()) {
    m_model->setLogin(text);
    refreshView();
    }
}

void PlayerPresenter::processPasswordChanged(std::string text) {
    if (text != m_model->password()) {
    m_model->setPassword(text);
    refreshView();
    }
}

void PlayerPresenter::processShowMenu() {
//  отправить запрос серверу
   try {
        boost::asio::io_context io_con;
        Command cl(io_con);
        // cl.connect(std::string("127.0.0.1"), std::string("8000"));
        cl.login(m_model->login(), m_model->password());
        m_viewList.at(0)->hideWindow();
        m_viewList.at(2)->showWindow();
        refreshView();
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << "\n";
    }
}

void PlayerPresenter::processShowAuth() {
   m_viewList.at(0)->showWindow();
   refreshView();
}

void PlayerPresenter::processShowReg() {
    m_viewList.at(0)->hideWindow();
    m_viewList.at(1)->showWindow();
    refreshView();
}

void PlayerPresenter::processShowWords() {
    WordsForm *words = new WordsForm();
    this->appendView(words);
    m_viewList.at(1)->hideWindow();
    m_viewList.at(3)->showWindow();

    refreshView();
}
