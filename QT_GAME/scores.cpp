#include "scores.h"
#include <QString>
#include <QFont>

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem (parent)
{
    //initialize the scores to 0
    score=0;

    //show the text
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}

void Score::increase()
{
    score++;
    setPlainText(QString("Score: ") + QString::number(score));
}

int Score::getScore()
{
    return score;
}
