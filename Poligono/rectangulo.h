#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "poligono.h"
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
class Rectangulo:public Poligono
{
public:
    Rectangulo(float ancho,float largo) {
        this->ancho=ancho;
        this->largo=largo;
    }
    float getLargo()
    {
        return ancho;
    }

    float getAncho()
    {
        return largo;
    }
    float area();
    void dibujar();
private:
    float ancho;
    float largo;
};
#endif // RECTANGULO_H
