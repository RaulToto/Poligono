#include "rectangulo.h"
float Rectangulo::area()
{
    return largo*ancho;
}

void Rectangulo::dibujar()
{
    QGraphicsScene *scene= new QGraphicsScene();
    QGraphicsRectItem *rect=new QGraphicsRectItem();
    rect->setRect(0,0,largo,ancho);


    scene->addItem(rect);
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    QGraphicsView *view=new QGraphicsView(scene);
    view->show();
}

