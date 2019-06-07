#ifndef ENEMIES_H
#define ENEMIES_H

#include <QGraphicsRectItem>
#include <QObject>

class Enemy:public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Enemy();
public slots:
    void move();
};


#endif // ENEMIES_H
