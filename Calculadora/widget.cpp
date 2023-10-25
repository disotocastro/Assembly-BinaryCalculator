#include "widget.h"
#include "ui_widget.h"

extern "C" __int64 _testmain();
//extern "C" __int64 double _metros2centimetros(double meters);
extern "C" __int64 int _metros2centimetros(int meters);
extern "C" __int64 int _metros2milimetros(int meters);
extern "C" __int64 int _metros2kilometros(int meters);



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
    //Cada vez que cambia la categoría, se limpia valor de entrada
    ui->valor_bases_num->clear();
    ui->valor_unidad1->setValue(0);

    // Hacer que seleccionar categoría siempre esté en blanco
    if (arg1 == "Seleccionar Categoría") {
        ui->cbx_unidad1->clear();
        ui->cbx_unidad2->clear();
        ui->lbl_ocultar_inicio->setVisible(true);
    }

    //Cambia las unidades que se pueden seleccionar, dependiendo de la seleccion de la categoria principal
    if (arg1 == "Distancia")
    {
        ui->lbl_ocultar_inicio->setVisible(false);
        ui->valor_unidad1->setVisible(true);
        ui->valor_bases_num->setVisible(false);
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
    }
    else if (arg1 == "Volumen") {
        ui->lbl_ocultar_inicio->setVisible(false);
        ui->valor_unidad1->setVisible(true);
        ui->valor_bases_num->setVisible(false);
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
        ui->lbl_ocultar_inicio->setVisible(false);
        ui->valor_unidad1->setVisible(true);
        ui->valor_bases_num->setVisible(false);
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
        ui->lbl_ocultar_inicio->setVisible(false);
        ui->valor_unidad1->setVisible(true);
        ui->valor_bases_num->setVisible(false);
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
        ui->lbl_ocultar_inicio->setVisible(false);
        ui->valor_unidad1->setVisible(true);
        ui->valor_bases_num->setVisible(false);
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
        ui->lbl_ocultar_inicio->setVisible(false);
        ui->valor_unidad1->setVisible(true);
        ui->valor_bases_num->setVisible(false);
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
        ui->lbl_ocultar_inicio->setVisible(false);
        ui->valor_unidad1->setVisible(true);
        ui->valor_bases_num->setVisible(true);
        ui->valor_unidad1->setVisible(false);
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




void Widget::on_valor_unidad1_valueChanged()
{
    int unidad1 = ui->valor_unidad1->value();
    int resultado = 0.0;
    QString unidad1_text = ui->cbx_unidad1->currentText();
    QString unidad2_text = ui->cbx_unidad2->currentText();


    if (unidad1_text == "Metros" && unidad2_text == "Centímetros")
    {
        asm volatile (
            "call _metros2centimetros"
            : "=D" (resultado)
            : "D" (unidad1)
            : "rax", "rcx"
            );
        ui->conversion_lbl->setText(QString::number(resultado));
        resultado = 0.0;
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Milímetros")
    {
        asm volatile (
            "call _metros2milimetros"
            : "=D" (resultado)
            : "D" (unidad1)
            : "rax", "rcx"
            );
        ui->conversion_lbl->setText(QString::number(resultado));
        resultado = 0.0;
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Metros")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Kilómetros")
    {
        asm volatile (
            "call _metros2kilometros"
            : "=D" (resultado)
            : "D" (unidad1)
            : "rax", "rcx"
            );
        ui->conversion_lbl->setText(QString::number(resultado) );
        resultado = 0.0;
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Pulgadas")
    {

    }

    else if (unidad1_text == "Metros" && unidad2_text == "Pies")
    {

    }

    else if (unidad1_text == "Metros" && unidad2_text == "Yardas")
    {

    }

    else if (unidad1_text == "Metros" && unidad2_text == "Millas")
    {

    }
}




void Widget::on_cbx_unidad1_currentTextChanged()
{
    ui->valor_unidad1->setValue(0);
    on_valor_unidad1_valueChanged();
}


void Widget::on_cbx_unidad2_currentTextChanged()
{
    on_valor_unidad1_valueChanged();
}

