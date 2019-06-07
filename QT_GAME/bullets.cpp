#include "Bullets.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "enemies.h"
#include "game_widget.h"

//there is and external global object called game!!
extern Game *game;


Bullet::Bullet()
{
    //Drewing a rect
    setRect(45,0,10,50);

    //Conecting timer
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

    //Moving the bullet
void Bullet::move()
{
    //Checking collide with enemies
    QList<QGraphicsItem *>colliding_items =collidingItems();
    for(int i=0,n=colliding_items.size();i<n;i++)
    {
        //checking the collision
        if(typeid(*(colliding_items[i]))==typeid(Enemy))
        {
            //Increase the scores
            game->score->increase();


            //Removing the object from scene
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            //delete from memory
            delete colliding_items[i];
            delete this;

            //provide to move not existing item.
            return;
        }
    }

    setPos(x(),y()-10);
    if(pos().y()+rect().height()<0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
