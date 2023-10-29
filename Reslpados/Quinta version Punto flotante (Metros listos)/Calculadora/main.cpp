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
