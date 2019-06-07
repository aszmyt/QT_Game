#ifndef GAME_WIDGET_H
#define GAME_WIDGET_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Player.h"
#include "scores.h"
#include "health.h"


class Game: public QGraphicsView{
public:
    Game(QWidget * parent=0);

    QGraphicsScene * scene;
    Player * player;
    Score * score;
    Health * health;

};


#endif // GAME_WIDGET_H
