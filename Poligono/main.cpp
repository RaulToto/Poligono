#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <iostream>
#include "cuadrado.h"
#include "rectangulo.h"
//#include "triangulo.h"

using namespace std;
int main(int argc, char *argv[])
{
    //Qapplication
    QApplication a(argc, argv);
    //create objects cuadrado and rectangulo----------------------------------
    Cuadrado *cua = new Cuadrado(50);
    cout <<"el area del cuadrado es :"  << cua->area() << endl;
    Rectangulo *rec=new Rectangulo(100,20);
    cout << "el area del rectangulo es :" << rec->area() << endl;
    //cua->dibujar();
    cua->dibujar();
    //create a scene -------------
    //QGraphicsScene *scene= new QGraphicsScene();
    //scene->addItem();
    //create a view to visualize the scene
    //QGraphicsView *view=new QGraphicsView();

    //Triangulo *tri=new Triangulo(5,6);
    //cout << "el area del triangulo es :" << tri->area() << endl;
    //view->show();
    return a.exec();

}
