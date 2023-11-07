#include "widget.h"
#include "ui_widget.h"

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
        //ui->lbl_ocultar_inicio->setVisible(true);
    }

    //Cambia las unidades que se pueden seleccionar, dependiendo de la seleccion de la categoria principal
    if (arg1 == "Distancia")
    {
        //ui->lbl_ocultar_inicio->setVisible(false);
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
        //ui->lbl_ocultar_inicio->setVisible(false);
        ui->valor_unidad1->setVisible(true);
        ui->valor_bases_num->setVisible(false);
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Mililitros");
        ui->cbx_unidad1->addItem("Litros");
        ui->cbx_unidad1->addItem("Galones");
        ui->cbx_unidad1->addItem("Metros Cúbicos");

        ui->cbx_unidad2->clear();
        ui->cbx_unidad2->addItem("Litros");
        ui->cbx_unidad2->addItem("Mililitros");
        ui->cbx_unidad2->addItem("Galones");
        ui->cbx_unidad2->addItem("Metros Cúbicos");
    }
    else if (arg1 == "Peso") {
        //ui->lbl_ocultar_inicio->setVisible(false);
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
        //ui->lbl_ocultar_inicio->setVisible(false);
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
        //ui->lbl_ocultar_inicio->setVisible(false);
        ui->valor_unidad1->setVisible(true);
        ui->valor_bases_num->setVisible(false);
        ui->cbx_unidad1->clear();
        ui->cbx_unidad1->addItem("Milisegundos");
        ui->cbx_unidad1->addItem("Segundos");
        ui->cbx_unidad1->addItem("Minutos");
        ui->cbx_unidad1->addItem("Horas");
        ui->cbx_unidad1->addItem("Días");
        ui->cbx_unidad1->addItem("Semanas");
        ui->cbx_unidad1->addItem("Años");

        ui->cbx_unidad2->clear();
        ui->cbx_unidad2->addItem("Milisegundos");
        ui->cbx_unidad2->addItem("Segundos");
        ui->cbx_unidad2->addItem("Minutos");
        ui->cbx_unidad2->addItem("Horas");
        ui->cbx_unidad2->addItem("Días");
        ui->cbx_unidad2->addItem("Semanas");
        ui->cbx_unidad2->addItem("Años");
    }
    else if (arg1 == "Datos") {
        //ui->lbl_ocultar_inicio->setVisible(false);
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
        //ui->lbl_ocultar_inicio->setVisible(false);
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
    double unidad1 = ui->valor_unidad1->value();
    double resultado;
    QString unidad1_text = ui->cbx_unidad1->currentText();
    QString unidad2_text = ui->cbx_unidad2->currentText();

    // Metros
    if (unidad1_text == "Metros" && unidad2_text == "Centímetros"      )
    {
        resultado = _metros2centimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Milímetros")
    {
        resultado = _metros2milimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Metros")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Kilómetros")
    {
        resultado = _metros2kilometros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Pulgadas")
    {
        resultado = _metros2pulgadas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Pies")
    {
        resultado = _metros2pies(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Yardas")
    {
        resultado = _metros2yardas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Metros" && unidad2_text == "Millas")
    {
        resultado = _metros2millas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    // Centimetros
    if (unidad1_text == "Centímetros" && unidad2_text == "Metros"      )
    {
        resultado = _centimetros2metros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Centímetros" && unidad2_text == "Milímetros")
    {
        resultado = _centimetros2milimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Centímetros" && unidad2_text == "Centímetros")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Centímetros" && unidad2_text == "Kilómetros")
    {
        resultado = _centimetros2kilometros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Centímetros" && unidad2_text == "Pulgadas")
    {
        resultado = _centimetros2pulgadas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Centímetros" && unidad2_text == "Pies")
    {
        resultado = _centimetros2pies(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Centímetros" && unidad2_text == "Yardas")
    {
        resultado = _centimetros2yardas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Centímetros" && unidad2_text == "Millas")
    {
        resultado = _centimetros2millas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    // Milimetros

    if (unidad1_text == "Milímetros" && unidad2_text == "Metros"      )
    {
        resultado = _milimetros2metros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milímetros" && unidad2_text == "Centímetros")
    {
        resultado = _milimetros2centimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milímetros" && unidad2_text == "Milímetros")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Milímetros" && unidad2_text == "Kilómetros")
    {
        resultado = _milimetros2kilometros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milímetros" && unidad2_text == "Pulgadas")
    {
        resultado =  _milimetros2pulgadas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milímetros" && unidad2_text == "Pies")
    {
        resultado =  _milimetros2pies(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milímetros" && unidad2_text == "Yardas")
    {
        resultado =  _milimetros2yardas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milímetros" && unidad2_text == "Millas")
    {
        resultado =  _milimetros2millas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    // Kilometros

    if (unidad1_text == "Kilómetros" && unidad2_text == "Metros"      )
    {
        resultado = _kilometros2metros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Kilómetros" && unidad2_text == "Milímetros")
    {
        resultado = _kilometros2milimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Kilómetros" && unidad2_text == "Kilómetros")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Kilómetros" && unidad2_text == "Centímetros")
    {
        resultado = _kilometros2centimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Kilómetros" && unidad2_text == "Pulgadas")
    {
        resultado = _kilometros2pulgadas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Kilómetros" && unidad2_text == "Pies")
    {
        resultado = _kilometros2pies(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Kilómetros" && unidad2_text == "Yardas")
    {
        resultado = _kilometros2yardas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Kilómetros" && unidad2_text == "Millas")
    {
        resultado = _kilometros2millas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    // Pulgadas

    if (unidad1_text == "Pulgadas" && unidad2_text == "Metros"      )
    {
        resultado = _pulgadas2metros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pulgadas" && unidad2_text == "Milímetros")
    {
        resultado = _pulgadas2milimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pulgadas" && unidad2_text == "Pulgadas")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Pulgadas" && unidad2_text == "Kilómetros")
    {
        resultado = _pulgadas2kilometros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pulgadas" && unidad2_text == "Centímetros")
    {
        resultado = _pulgadas2centimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pulgadas" && unidad2_text == "Pies")
    {
        resultado = _pulgadas2pies(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pulgadas" && unidad2_text == "Yardas")
    {
        resultado = _pulgadas2yardas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pulgadas" && unidad2_text == "Millas")
    {
        resultado = _pulgadas2millas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }




    // Pies

    if (unidad1_text == "Pies" && unidad2_text == "Metros"      )
    {
        resultado = _pies2metros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pies" && unidad2_text == "Milímetros")
    {
        resultado = _pies2milimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pies" && unidad2_text == "Pies")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Pies" && unidad2_text == "Kilómetros")
    {
        resultado = _pies2kilometros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pies" && unidad2_text == "Centímetros")
    {
        resultado = _pies2centimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pies" && unidad2_text == "Pulgadas")
    {
        resultado = _pies2pulgadas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pies" && unidad2_text == "Yardas")
    {
        resultado = _pies2yardas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Pies" && unidad2_text == "Millas")
    {
        resultado = _pies2millas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    // Yardas

    if (unidad1_text == "Yardas" && unidad2_text == "Metros"      )
    {
        resultado = _yardas2metros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Yardas" && unidad2_text == "Milímetros")
    {
        resultado = _yardas2milimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Yardas" && unidad2_text == "Yardas")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Yardas" && unidad2_text == "Kilómetros")
    {
        resultado = _yardas2kilometros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Yardas" && unidad2_text == "Centímetros")
    {
        resultado = _yardas2centimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Yardas" && unidad2_text == "Pulgadas")
    {
        resultado = _yardas2pulgadas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Yardas" && unidad2_text == "Pies")
    {
        resultado = _yardas2pies(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Yardas" && unidad2_text == "Millas")
    {
        resultado = _yardas2millas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    // Millas

    if (unidad1_text == "Millas" && unidad2_text == "Metros"      )
    {
        resultado = _millas2metros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Millas" && unidad2_text == "Milímetros")
    {
        resultado = _millas2milimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Millas" && unidad2_text == "Millas")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Millas" && unidad2_text == "Kilómetros")
    {
        resultado = _millas2kilometros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Millas" && unidad2_text == "Centímetros")
    {
        resultado = _millas2centimetros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Millas" && unidad2_text == "Pulgadas")
    {
        resultado = _millas2pulgadas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Millas" && unidad2_text == "Pies")
    {
        resultado = _millas2pies(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Millas" && unidad2_text == "Yardas")
    {
        resultado = _millas2yardas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }





//SECCION VOLUMEN

       //SECCION MILILITROS
    else if (unidad1_text == "Mililitros" && unidad2_text == "Mililitros")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Mililitros" && unidad2_text == "Litros")
    {
        resultado = _mililitros2litros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Mililitros" && unidad2_text == "Galones")
    {
        resultado = _mililitros2galones(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Mililitros" && unidad2_text == "Metros Cúbicos")
    {
        resultado = _mililitros2metroscubicos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }


    //SECCION LITROS
    else if (unidad1_text == "Litros" && unidad2_text == "Mililitros")
    {

        resultado = _litros2mililitros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Litros" && unidad2_text == "Litros")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Litros" && unidad2_text == "Galones")
    {
        resultado = _litros2galones(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Litros" && unidad2_text == "Metros Cúbicos")
    {
        resultado = _litros2metroscubicos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

        //SECCION GALONES
    else if (unidad1_text == "Galones" && unidad2_text == "Mililitros")
    {
        resultado = _galones2mililitros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Galones" && unidad2_text == "Litros")
    {
        resultado = _galones2litros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Galones" && unidad2_text == "Galones")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Galones" && unidad2_text == "Metros Cúbicos")
    {
        resultado = _galones2metroscubicos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }


     //SECCION METROS CUBICOS
    else if (unidad1_text == "Metros Cúbicos" && unidad2_text == "Mililitros")
    {
        resultado = _metroscubicos2mililitros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

     else if (unidad1_text == "Metros Cúbicos" && unidad2_text == "Litros")
    {
        resultado = _metroscubicos2litros(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

     else if (unidad1_text == "Metros Cúbicos" && unidad2_text == "Galones")
    {
        resultado = _metroscubicos2galones(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }




    // PESO

    // Gramos
    if (unidad1_text == "Gramos" && unidad2_text == "Kilogramos"      )
    {
        resultado = _gramos2kilogramos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Gramos" && unidad2_text == "Libras")
    {
        resultado = _gramos2libras(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Gramos" && unidad2_text == "Onzas")
    {
        resultado = _gramos2onzas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Gramos" && unidad2_text == "Gramos")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }


    // Kilogramos
    if (unidad1_text == "Kilogramos" && unidad2_text == "Gramos"      )
    {
        resultado = _kilogramos2gramos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Kilogramos" && unidad2_text == "Libras")
    {
        resultado = _kilogramos2libras(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Kilogramos" && unidad2_text == "Onzas")
    {
        resultado = _kilogramos2onzas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }
    else if (unidad1_text == "Kilogramos" && unidad2_text == "Kilogramos")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }


    // Kilogramos
    if (unidad1_text == "Libras" && unidad2_text == "Gramos"      )
    {
        resultado = _libras2gramos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Libras" && unidad2_text == "Kilogramos")
    {
        resultado = _libras2kilogramos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Libras" && unidad2_text == "Onzas")
    {
        resultado = _libras2onzas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Libras" && unidad2_text == "Libras")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }


    // Onzas

    if (unidad1_text == "Onzas" && unidad2_text == "Gramos"      )
    {
        resultado = _onzas2gramos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Onzas" && unidad2_text == "Kilogramos")
    {
        resultado = _onzas2kilogramos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Onzas" && unidad2_text == "Libras")
    {
        resultado = _onzas2libras(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Onzas" && unidad2_text == "Onzas")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    // TEMPERATURA




    if (unidad1_text == "Celsius" && unidad2_text == "Fahrenheit"      )
    {
        resultado = _Celsius2Fahrenheit(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Celsius" && unidad2_text == "Kelvin")
    {
        resultado = _Celsius2Kelvin(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Celsius" && unidad2_text == "Celsius")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }



    if (unidad1_text == "Fahrenheit" && unidad2_text == "Celsius"      )
    {
        resultado = _Fahrenheit2Celsius(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Fahrenheit" && unidad2_text == "Kelvin")
    {
        resultado = _Fahrenheit2Kelvin(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Fahrenheit" && unidad2_text == "Fahrenheit")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }



    if (unidad1_text == "Kelvin" && unidad2_text == "Celsius"      )
    {
        resultado = _Kelvin2Celsius(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Kelvin" && unidad2_text == "Fahrenheit")
    {
        resultado = _Kelvin2Fahrenheit(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Kelvin" && unidad2_text == "Kelvin")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }


// Tiempo


    if (unidad1_text == "Milisegundos" && unidad2_text == "Segundos")
    {
        resultado = _Milisegundos2Segundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milisegundos" && unidad2_text == "Minutos")
    {
        resultado = _Milisegundos2Minutos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milisegundos" && unidad2_text == "Horas")
    {
        resultado = _Milisegundos2Horas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milisegundos" && unidad2_text == "Días")
    {
        resultado = _Milisegundos2Días(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milisegundos" && unidad2_text == "Semanas")
    {
        resultado = _Milisegundos2Semanas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milisegundos" && unidad2_text == "Años")
    {
        resultado = _Milisegundos2Anios(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Milisegundos" && unidad2_text == "Milisegundos")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }






    // Segundos
    if (unidad1_text == "Segundos" && unidad2_text == "Minutos")
    {
        resultado = _Segundos2Minutos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Segundos" && unidad2_text == "Segundos")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Segundos" && unidad2_text == "Horas")
    {
        resultado = _Segundos2Horas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Segundos" && unidad2_text == "Días")
    {
        resultado = _Segundos2Dias(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Segundos" && unidad2_text == "Semanas")
    {
        resultado = _Segundos2Semanas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Segundos" && unidad2_text == "Años")
    {
        resultado = _Segundos2Anios(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Segundos" && unidad2_text == "Milisegundos")
    {
        resultado = _Segundos2Milisegundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }




    // Minutos
    if (unidad1_text == "Minutos" && unidad2_text == "Segundos")
    {
        resultado = _Minutos2Segundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Minutos" && unidad2_text == "Minutos")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Minutos" && unidad2_text == "Horas")
    {
        resultado = _Minutos2Horas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Minutos" && unidad2_text == "Días")
    {
        resultado = _Minutos2Dias(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Minutos" && unidad2_text == "Semanas")
    {
        resultado = _Minutos2Semanas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Minutos" && unidad2_text == "Años")
    {
        resultado = _Minutos2Anios(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Minutos" && unidad2_text == "Milisegundos")
    {
        resultado = _Minutos2Milisegundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }


    // Horas

    if (unidad1_text == "Horas" && unidad2_text == "Segundos")
    {
        resultado = _Horas2Segundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Horas" && unidad2_text == "Minutos")
    {
        resultado = _Horas2Minutos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Horas" && unidad2_text == "Horas")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Horas" && unidad2_text == "Días")
    {
        resultado = _Horas2Dias(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Horas" && unidad2_text == "Semanas")
    {
        resultado = _Horas2Semanas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Horas" && unidad2_text == "Años")
    {
        resultado = _Horas2Anios(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Horas" && unidad2_text == "Milisegundos")
    {
        resultado = _Horas2Milisegundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    // Días
    if (unidad1_text == "Días" && unidad2_text == "Segundos")
    {
        resultado = _Dias2Segundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Días" && unidad2_text == "Minutos")
    {
        resultado = _Dias2Minutos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Días" && unidad2_text == "Horas")
    {
        resultado = _Dias2Horas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Días" && unidad2_text == "Días")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Días" && unidad2_text == "Semanas")
    {
        resultado = _Dias2Semanas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Días" && unidad2_text == "Años")
    {
        resultado = _Dias2Anios(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Días" && unidad2_text == "Milisegundos")
    {
        resultado = _Dias2Milisegundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    // Semanas
    if (unidad1_text == "Semanas" && unidad2_text == "Segundos")
    {
        resultado = _Semanas2Segundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Semanas" && unidad2_text == "Minutos")
    {
        resultado = _Semanas2Minutos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Semanas" && unidad2_text == "Horas")
    {
        resultado = _Semanas2Horas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Semanas" && unidad2_text == "Días")
    {
        resultado = _Semanas2Dias(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Semanas" && unidad2_text == "Semanas")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Semanas" && unidad2_text == "Años")
    {
        resultado = _Semanas2Anios(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Semanas" && unidad2_text == "Milisegundos")
    {
        resultado = _Semanas2Milisegundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    // Años
    if (unidad1_text == "Años" && unidad2_text == "Segundos")
    {
        resultado = _Anios2Segundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Años" && unidad2_text == "Minutos")
    {
        resultado = _Anios2Minutos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Años" && unidad2_text == "Horas")
    {
        resultado = _Anios2Horas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Años" && unidad2_text == "Días")
    {
        resultado = _Anios2Dias(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Años" && unidad2_text == "Semanas")
    {
        resultado = _Anios2Semanas(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
    }

    else if (unidad1_text == "Años" && unidad2_text == "Años")
    {
        ui->conversion_lbl->setText(QString::number(unidad1));
    }

    else if (unidad1_text == "Años" && unidad2_text == "Milisegundos")
    {
        resultado = _Anios2Milisegundos(unidad1);
        ui->conversion_lbl->setText(QString::number(resultado));
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

