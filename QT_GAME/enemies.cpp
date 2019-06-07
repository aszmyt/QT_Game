#include "Enemies.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "game_widget.h"

extern Game * game;

Enemy::Enemy()
{
    //Random spawn of enemies
    int random_number = rand() % 700;
    setPos(random_number,0);

    //Drewing a rect
    setRect(0,0,100,100);

    //Conecting timer
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

    //Moving Enemies down
void Enemy::move()
{
    setPos(x(),y()+5);
    if(pos().y()>600)
    {
        //Decrease the health
        game->health->decrease();


        scene()->removeItem(this);
        delete this;
    }
}
