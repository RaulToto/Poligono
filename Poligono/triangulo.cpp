#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "poligono.h"
class Triangulo:public Poligono
{
public:
    Triangulo(float base,float altura){
        this->altura=altura;
        this->base=base;
    }
    float area();
private:
    float base;
    float altura;
};
#endif // TRIANGULO_H
