#include "Player.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include "Bullets.h"
#include "enemies.h"

void Player::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left && pos().x()>0){
        setPos(x()-10,y());
    }
    else if(event->key() == Qt::Key_Right && pos().x()+100<800){
        setPos(x()+10,y());
    }
    //Creating a bullet
    else if(event->key() ==Qt::Key_Space)
    {
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}
    //Creating an enemies
void Player::spawn()
{
    Enemy *enemy=new Enemy();
    scene()->addItem(enemy);
}
