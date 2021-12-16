#ifndef PLAYERPRESENTER_H
#define PLAYERPRESENTER_H

#include <QObject>
#include "player.h"
#include "iwiringview.h"
#include "wordsform.h"
#include "menuform.h"
#include "regform.h"
#include "loginform.h"
#include "command.h"
#include "profile.h"

// #include <boost/bind/bind.hpp>
// #include <boost/asio.hpp>
// #include <boost/json.hpp>

class IWiringView;
template <typename T> class QList;


class PlayerPresenter : public QObject
{
    Q_OBJECT

public:
    explicit PlayerPresenter(QObject *parent = 0);

    void appendView(IWiringView *view);

private:
    void refreshView() const;
    void refreshView(IWiringView *view) const;

    Player *m_model;
//    QList<IWiringView*> m_viewList;
    std::vector<IWiringView*> m_viewList;

private slots:
    void processLoginChanged(std::string login);
    void processPasswordChanged(std::string login);
    
    void processShowMenu();
    void processShowAuth();
    void processShowReg();
    void processShowWords();
};

#endif // PLAYERPRESENTER_H
