#include "widget.h"
#include "ui_widget.h"

extern "C" __int64 _testmain();
//extern "C" __int64 double _metros2centimetros(double meters);
extern "C" __int64 int _metros2centimetros(int meters);


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Calculadora de unidades");
    ui->conversion_lbl->setText(" ");
}

Widget::~Widget()
{
    delete ui;
}

// Categorias
void Widget::on_cbx_categoria_currentTextChanged(const QString &arg1)
{
    // Hacer que seleccionar categoría siempre esté en blanco
    if (arg1 == "Seleccionar Categoría") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad2->clear();
    }

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

        ui->cbx_unidad2->clear();
        ui->cbx_unidad2->addItem("Centímetros");
        ui->cbx_unidad2->addItem("Milímetros");
        ui->cbx_unidad2->addItem("Metros");
        ui->cbx_unidad2->addItem("Kilómetros");
        ui->cbx_unidad2->addItem("Pulgadas");
        ui->cbx_unidad2->addItem("Pies");
        ui->cbx_unidad2->addItem("Yardas");
        ui->cbx_unidad2->addItem("Millas");

        // Llamando a ensamblador
        int metersValue = ui->valor_unidad1->value();
        int centimetersValue;

        asm volatile (
            "call _metros2centimetros"
            : "=D" (centimetersValue)
            : "D" (metersValue)
            : "rax", "rcx"
            );
        ui->conversion_lbl->setText(QString::number(centimetersValue) + "cm");

    }
    else if (arg1 == "Volumen") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Mililitros");
        ui->cbx_unidad1->addItem("Litros");
        ui->cbx_unidad1->addItem("Galones");
        ui->cbx_unidad1->addItem("Metros Cúbicos.");

        ui->cbx_unidad2->clear();
        ui->cbx_unidad2->addItem("Litros");
        ui->cbx_unidad2->addItem("Mililitros");
        ui->cbx_unidad2->addItem("Galones");
        ui->cbx_unidad2->addItem("Metros Cúbicos.");

    }
    else if (arg1 == "Peso") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Gramos");
        ui->cbx_unidad1->addItem("Kilogramos");
        ui->cbx_unidad1->addItem("Libras");
        ui->cbx_unidad1->addItem("Onzas");

        ui->cbx_unidad2->clear();
        ui->cbx_unidad2->addItem("Kilogramos");
        ui->cbx_unidad2->addItem("Gramos");
        ui->cbx_unidad2->addItem("Libras");
        ui->cbx_unidad2->addItem("Onzas");
    }
    else if (arg1 == "Temperatura") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Fahrenheit");
        ui->cbx_unidad1->addItem("Celsius");
        ui->cbx_unidad1->addItem("Kelvin");

        ui->cbx_unidad2->clear();
        ui->cbx_unidad2->addItem("Celsius");
        ui->cbx_unidad2->addItem("Fahrenheit");
        ui->cbx_unidad2->addItem("Kelvin");
    }
    else if (arg1 == "Tiempo") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Milisegundos");
        ui->cbx_unidad1->addItem("Segundos");
        ui->cbx_unidad1->addItem("Minutos");
        ui->cbx_unidad1->addItem("Días");
        ui->cbx_unidad1->addItem("Semanas ");
        ui->cbx_unidad1->addItem("Años");

        ui->cbx_unidad2->clear();
        ui->cbx_unidad2->addItem("Segundos");
        ui->cbx_unidad2->addItem("Milisegundos");
        ui->cbx_unidad2->addItem("Minutos");
        ui->cbx_unidad2->addItem("Días");
        ui->cbx_unidad2->addItem("Semanas ");
        ui->cbx_unidad2->addItem("Años");
    }
    else if (arg1 == "Datos") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Bytes");
        ui->cbx_unidad1->addItem("Kilobytes");
        ui->cbx_unidad1->addItem("Megabytes");
        ui->cbx_unidad1->addItem("Gigabytes");
        ui->cbx_unidad1->addItem("Terabytes");
        ui->cbx_unidad1->addItem("Bit");
        ui->cbx_unidad1->addItem("Kibibit");
        ui->cbx_unidad1->addItem("Mebibit");
        ui->cbx_unidad1->addItem("Gibibit");
        ui->cbx_unidad1->addItem("Tebibit");

        ui->cbx_unidad2->clear();
        ui->cbx_unidad2->addItem("Kilobytes");
        ui->cbx_unidad2->addItem("Bytes");
        ui->cbx_unidad2->addItem("Megabytes");
        ui->cbx_unidad2->addItem("Gigabytes");
        ui->cbx_unidad2->addItem("Terabytes");
        ui->cbx_unidad2->addItem("Bit");
        ui->cbx_unidad2->addItem("Kibibit");
        ui->cbx_unidad2->addItem("Mebibit");
        ui->cbx_unidad2->addItem("Gibibit");
        ui->cbx_unidad2->addItem("Tebibit");
    }
    else if (arg1 == "Numérico") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Binario");
        ui->cbx_unidad1->addItem("Decimal");
        ui->cbx_unidad1->addItem("Hexadecimal");

        ui->cbx_unidad2->clear();
        ui->cbx_unidad2->addItem("Decimal");
        ui->cbx_unidad2->addItem("Binario");
        ui->cbx_unidad2->addItem("Hexadecimal");
    }
}

void Widget::on_consultar_btn_clicked()
{
    ui->conversion_lbl->setText(QString::number(_testmain()));
}

