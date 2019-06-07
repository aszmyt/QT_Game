#ifndef BULLETS_H
#define BULLETS_H

#include <QGraphicsRectItem>
#include <QObject>

class Bullet:public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bullet();
public slots:
    void move();
};

#endif // BULLETS_H
