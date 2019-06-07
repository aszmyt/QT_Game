#include <QApplication>
#include <QGraphicsScene>
#include "MyRect.h"
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Creating scene
    QGraphicsScene *scene = new QGraphicsScene();

    // Creating an item to display on scene
    MyRect* player = new MyRect();
    player ->setRect(0,0,100,100);

    //Adding item to scene
    scene->addItem(player);

    // Making rect focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    //Wie a scene
    QGraphicsView * view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    player->setPos(view->width()/2-player->rect().width()/2,view->height() - player->rect().height());


    return a.exec();
}
