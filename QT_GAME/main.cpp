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
    MyRect* rect = new MyRect();
    rect ->setRect(0,0,100,100);

    //Adding item to scene
    scene->addItem(rect);

    // Making rect focusable
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    //Wie a scene
    QGraphicsView * view = new QGraphicsView(scene);
    view->show();


    return a.exec();
}
