#include "widget.h"
//#include "operaciones.s"


#include <QApplication>
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}



/*
    double resultado=0;
    string unidad1="";
    string unidad2="";
    double valor=0.0;

    if (unidad1=="Celsius"){
        if(unidad2=="Fahrenheit"){
            resultado = convert_cels_to_fahr(valor);
        }else if(unidad2=="Kelvin"){
            resultado=convert_cels_to_kel(valor);
        }else{
            resultado=1;
        }
    }

     if (unidad1=="Kelvin"){
        if(unidad2=="Fahrenheit"){
            resultado = convert_kel_to_fahr(valor);
        }else if(unidad2=="Celsius"){
            resultado=convert_kel_to_cels(valor);
        }else{
            resultado=1;
        }
     }

     if (unidad1=="Fahrenheit"){
        if(unidad2=="Celsius"){
            resultado = convert_fahr_to_cels(valor);
        }else if(unidad2=="Kelvin"){
            resultado=convert_cels_to_kel(valor);
        }else{
            resultado=1;
        }
     }

*/
