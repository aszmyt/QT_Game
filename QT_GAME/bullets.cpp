#include "Bullets.h"
#include <QTimer>

Bullet::Bullet()
{
    //Drewing a rect
    setRect(0,0,10,50);

    //Conecting timer
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

    //Moving the bullet
void Bullet::move()
{
    setPos(x(),y()-10);
}
