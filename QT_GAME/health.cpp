#include "health.h"
#include <QString>
#include <QFont>

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem (parent)
{
    //initialize the scores to 0
    health=3;

    //show the text
    setPlainText(QString("Health: ") + QString::number(health)); //Basic health=3
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}

void Health::decrease()
{
    health--;
    setPlainText(QString("Health: ") + QString::number(health));
}

int Health::getHealth()
{
    return health;
}
