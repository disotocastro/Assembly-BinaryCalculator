#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Calculadora de unidades");
    ui->resultado->setText(" ");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_cbx_categoria_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Distancia") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Milímetros");
        ui->cbx_unidad1->addItem("Centímetros");
        ui->cbx_unidad1->addItem("Metros");
        ui->cbx_unidad1->addItem("Kilómetros");
        ui->cbx_unidad1->addItem("Pulgadas");
        ui->cbx_unidad1->addItem("Pies");
        ui->cbx_unidad1->addItem("Yardas");
        ui->cbx_unidad1->addItem("Millas");

    }
    else if (arg1 == "Volumen") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Mililitros");
        ui->cbx_unidad1->addItem("Litros");
        ui->cbx_unidad1->addItem("Galones");
        ui->cbx_unidad1->addItem("Metros Cúbicos.");

    }
    else if (arg1 == "Peso") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Gramos");
        ui->cbx_unidad1->addItem("Kilogramos");
        ui->cbx_unidad1->addItem("Libras");
        ui->cbx_unidad1->addItem("Onzas");
    }
    else if (arg1 == "Temperatura") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Fahrenheit");
        ui->cbx_unidad1->addItem("Celsius");
        ui->cbx_unidad1->addItem("Kelvin");
    }
    else if (arg1 == "Tiempo") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("KG");
        ui->cbx_unidad1->addItem("Celsius");
        ui->cbx_unidad1->addItem("Celsius");
        ui->cbx_unidad1->addItem("Celsius");
    }
    else if (arg1 == "Tiempo") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("KG");
        ui->cbx_unidad1->addItem("Celsius");
        ui->cbx_unidad1->addItem("Celsius");
        ui->cbx_unidad1->addItem("Celsius");
    }
}

