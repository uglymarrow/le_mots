#ifndef IWIRINGVIEW_H
#define IWIRINGVIEW_H

#include <QObject>
#include "player.h"

/*!
    \interface IWiringView

    Интерфейс представления в триаде MVP расчета электропроводки.
*/

class IWiringView
{
public:

     virtual void setLogin(std::string login) = 0;
     virtual void setRating(float rating) = 0;


     virtual void showWindow() = 0;
     virtual void hideWindow() = 0;

};

#endif // IWIRINGVIEW_H
