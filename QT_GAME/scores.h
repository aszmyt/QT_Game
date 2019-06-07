#ifndef SCORES_H
#define SCORES_H

#include <QGraphicsTextItem>

class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem *parent=0);
    void increase();
    int getScore();
private:
    int score;
};

#endif // SCORES_H
