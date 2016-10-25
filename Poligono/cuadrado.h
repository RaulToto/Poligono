#ifndef CUADRADO_H
#define CUADRADO_H
#include "poligono.h"
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
class Cuadrado:public Poligono
{
public:
    Cuadrado();
    Cuadrado(float lado)
    {
        this->lado=lado;
    }
    void comprobarCuadrado();
    float area();
    void dibujar()
    {
        QGraphicsScene *scene= new QGraphicsScene();
        QGraphicsRectItem *rect=new QGraphicsRectItem();
        rect->setRect(0,0,lado,lado);


        scene->addItem(rect);
        rect->setFlag(QGraphicsItem::ItemIsFocusable);
        rect->setFocus();

        QGraphicsView *view=new QGraphicsView(scene);
        view->show();
    }

private:
    float lado;
    float angulo;

};
#endif // CUADRADO_H
