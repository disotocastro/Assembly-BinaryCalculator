#include "widget.h"
#include "ui_widget.h"
#include <bitset>
#include <QString>

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
    QString unidad1_text = ui->cbx_unidad1->currentText();
    QString unidad2_text = ui->cbx_unidad2->currentText();

    double unidad1 = ui->valor_unidad1->value();
    double resultado;

// ===== DISTANCIA =====
    std::map<std::string, std::function<double(double)>> conversionesMetros = {
        {"Centímetros", _metros2centimetros},
        {"Milímetros", _metros2milimetros},
        {"Metros", [](double valor) { return valor; }},  // Este es el caso donde se hace cm a cm, por ejemplo
        {"Kilómetros", _metros2kilometros},
        {"Pulgadas", _metros2pulgadas},
        {"Pies", _metros2pies},
        {"Yardas", _metros2yardas},
        {"Millas", _metros2millas}
    };

    std::map<std::string, std::function<double(double)>> conversionesCentimetros = {
        {"Metros", _centimetros2metros},
        {"Milímetros", _centimetros2milimetros},
        {"Centímetros", [](double valor) { return valor; }},
        {"Kilómetros", _centimetros2kilometros},
        {"Pulgadas", _centimetros2pulgadas},
        {"Pies", _centimetros2pies},
        {"Yardas", _centimetros2yardas},
        {"Millas", _centimetros2millas}
    };


    std::map<std::string, std::function<double(double)>> conversionesMilimetros = {
        {"Metros", _milimetros2metros},
        {"Centímetros", _milimetros2centimetros},
        {"Milímetros", [](double valor) { return valor; }},
        {"Kilómetros", _milimetros2kilometros},
        {"Pulgadas", _milimetros2pulgadas},
        {"Pies", _milimetros2pies},
        {"Yardas", _milimetros2yardas},
        {"Millas", _milimetros2millas}
    };

    std::map<std::string, std::function<double(double)>> conversionesKilometros = {
        {"Metros", _kilometros2metros},
        {"Milímetros", _kilometros2milimetros},
        {"Centímetros", _kilometros2centimetros},
        {"Kilómetros", [](double valor) { return valor; }},
        {"Pulgadas", _kilometros2pulgadas},
        {"Pies", _kilometros2pies},
        {"Yardas", _kilometros2yardas},
        {"Millas", _kilometros2millas}
    };


    std::map<std::string, std::function<double(double)>> conversionesPulgadas = {
        {"Metros", _pulgadas2metros},
        {"Milímetros", _pulgadas2milimetros},
        {"Pulgadas", [](double valor) { return valor; }},
        {"Kilómetros", _pulgadas2kilometros},
        {"Centímetros", _pulgadas2centimetros},
        {"Pies", _pulgadas2pies},
        {"Yardas", _pulgadas2yardas},
        {"Millas", _pulgadas2millas}
    };

    std::map<std::string, std::function<double(double)>> conversionesPies = {
        {"Metros", _pies2metros},
        {"Milímetros", _pies2milimetros},
        {"Pies", [](double valor) { return valor; }},
        {"Kilómetros", _pies2kilometros},
        {"Centímetros", _pies2centimetros},
        {"Pulgadas", _pies2pulgadas},
        {"Yardas", _pies2yardas},
        {"Millas", _pies2millas}
    };

    std::map<std::string, std::function<double(double)>> conversionesYardas = {
        {"Metros", _yardas2metros},
        {"Milímetros", _yardas2milimetros},
        {"Yardas", [](double valor) { return valor; }},
        {"Kilómetros", _yardas2kilometros},
        {"Centímetros", _yardas2centimetros},
        {"Pulgadas", _yardas2pulgadas},
        {"Pies", _yardas2pies},
        {"Millas", _yardas2millas}
    };

    std::map<std::string, std::function<double(double)>> conversionesMillas = {
        {"Metros", _millas2metros},
        {"Milímetros", _millas2milimetros},
        {"Millas", [](double valor) { return valor; }},
        {"Kilómetros", _millas2kilometros},
        {"Centímetros", _millas2centimetros},
        {"Pulgadas", _millas2pulgadas},
        {"Pies", _millas2pies},
        {"Yardas", _millas2yardas}
    };

// ===== VOLUMEN =====
    std::map<std::string, std::function<double(double)>> conversionesMililitros = {
        {"Mililitros", [](double valor) { return valor; }},
        {"Litros", _mililitros2litros},
        {"Galones", _mililitros2galones},
        {"Metros Cúbicos", _mililitros2metroscubicos}
        };

    std::map<std::string, std::function<double(double)>> conversionesLitros = {
        {"Mililitros", _litros2mililitros},
        {"Litros", [](double valor) { return valor; }},
        {"Galones", _litros2galones},
        {"Metros Cúbicos", _litros2metroscubicos}
        };

    std::map<std::string, std::function<double(double)>> conversionesGalones = {
        {"Mililitros", _galones2mililitros},
        {"Litros", _galones2litros},
        {"Galones", [](double valor) { return valor; }},
        {"Metros Cúbicos", _galones2metroscubicos}
        };

// ===== PESOS =====
    std::map<std::string, std::function<double(double)>> conversionesGramos = {
        {"Gramos", [](double valor) { return valor; }},
        {"Kilogramos", _gramos2kilogramos},
        {"Libras", _gramos2libras},
        {"Onzas", _gramos2onzas}
    };

    std::map<std::string, std::function<double(double)>> conversionesKilogramos = {
        {"Gramos", _kilogramos2gramos},
        {"Kilogramos", [](double valor) { return valor; }},
        {"Libras", _kilogramos2libras},
        {"Onzas", _kilogramos2onzas}
    };

    std::map<std::string, std::function<double(double)>> conversionesLibras = {
        {"Gramos", _libras2gramos},
        {"Kilogramos", _libras2kilogramos},
        {"Libras", [](double valor) { return valor; }},
        {"Onzas", _libras2onzas}
    };

    std::map<std::string, std::function<double(double)>> conversionesOnzas = {
        {"Gramos", _onzas2gramos},
        {"Kilogramos", _onzas2kilogramos},
        {"Libras", _onzas2libras},
        {"Onzas", [](double valor) { return valor; }}
    };

 // ===== Temperatura =====
    std::map<std::string, std::function<double(double)>> conversionesCelsius = {
        {"Fahrenheit", _Celsius2Fahrenheit},
        {"Kelvin", _Celsius2Kelvin},
        {"Celsius", [](double valor) { return valor; }}
    };

    std::map<std::string, std::function<double(double)>> conversionesFahrenheit = {
        {"Celsius", _Fahrenheit2Celsius},
        {"Kelvin", _Fahrenheit2Kelvin},
        {"Fahrenheit", [](double valor) { return valor; }}
    };

    std::map<std::string, std::function<double(double)>> conversionesKelvin = {
        {"Celsius", _Kelvin2Celsius},
        {"Fahrenheit", _Kelvin2Fahrenheit},
        {"Kelvin", [](double valor) { return valor; }}
    };

 // ===== TIEMPO =====
    std::map<std::string, std::function<double(double)>> conversionesMilisegundos = {
        {"Segundos", _Milisegundos2Segundos},
        {"Minutos", _Milisegundos2Minutos},
        {"Horas", _Milisegundos2Horas},
        {"Días", _Milisegundos2Días},
        {"Semanas", _Milisegundos2Semanas},
        {"Años", _Milisegundos2Anios},
        {"Milisegundos", [](double valor) { return valor; }}
        };

    std::map<std::string, std::function<double(double)>> conversionesSegundos = {
        {"Milisegundos", _Segundos2Milisegundos},
        {"Minutos", _Segundos2Minutos},
        {"Horas", _Segundos2Horas},
        {"Días", _Segundos2Dias},
        {"Semanas", _Segundos2Semanas},
        {"Años", _Segundos2Anios},
        {"Segundos", [](double valor) { return valor; }}
    };

    std::map<std::string, std::function<double(double)>> conversionesMinutos = {
        {"Segundos", _Minutos2Segundos},
        {"Milisegundos", _Minutos2Milisegundos},
        {"Horas", _Minutos2Horas},
        {"Días", _Minutos2Dias},
        {"Semanas", _Minutos2Semanas},
        {"Años", _Minutos2Anios},
        {"Minutos", [](double valor) { return valor; }}
    };

    std::map<std::string, std::function<double(double)>> conversionesHoras = {
        {"Segundos", _Horas2Segundos},
        {"Minutos", _Horas2Minutos},
        {"Milisegundos", _Horas2Milisegundos},
        {"Días", _Horas2Dias},
        {"Semanas", _Horas2Semanas},
        {"Años", _Horas2Anios},
        {"Horas", [](double valor) { return valor; }}
    };

    std::map<std::string, std::function<double(double)>> conversionesDias = {
        {"Segundos", _Dias2Segundos},
        {"Minutos", _Dias2Minutos},
        {"Horas", _Dias2Horas},
        {"Milisegundos", _Dias2Milisegundos},
        {"Semanas", _Dias2Semanas},
        {"Años", _Dias2Anios},
        {"Días", [](double valor) { return valor; }}
        };

    std::map<std::string, std::function<double(double)>> conversionesSemanas = {
        {"Segundos", _Semanas2Segundos},
        {"Minutos", _Semanas2Minutos},
        {"Horas", _Semanas2Horas},
        {"Días", _Semanas2Dias},
        {"Milisegundos", _Semanas2Milisegundos},
        {"Años", _Semanas2Anios},
        {"Semanas", [](double valor) { return valor; }}
    };

    std::map<std::string, std::function<double(double)>> conversionesAnios = {
        {"Segundos", _Anios2Segundos},
        {"Minutos", _Anios2Minutos},
        {"Horas", _Anios2Horas},
        {"Días", _Anios2Dias},
        {"Semanas", _Anios2Semanas},
        {"Milisegundos", _Anios2Milisegundos},
        {"Años", [](double valor) { return valor; }}
    };

// ===== DATOS =====
    std::map<std::string, std::function<double(double)>> conversionesBit = {
        {"Bit", [](double valor) { return valor; }},
        {"Bytes", _Bit2Bytes},
        {"Kilobytes", _Bit2Kilobytes},
        {"Megabytes", _Bit2Megabytes},
        {"Gigabytes", _Bit2Gigabytes},
        {"Terabytes", _Bit2Terabytes},
        {"Kibibit", _Bit2Kibibit},
        {"Mebibit", _Bit2Mebibit},
        {"Gibibit", _Bit2Gibibit},
        {"Tebibit", _Bit2Tebibit}
    };

    std::map<std::string, std::function<double(double)>> conversionesBytes = {
        {"Bit", _Bytes2Bit},
        {"Bytes", [](double valor) { return valor; }},
        {"Kilobytes", _Bytes2Kilobytes},
        {"Megabytes", _Bytes2Megabytes},
        {"Gigabytes", _Bytes2Gigabytes},
        {"Terabytes", _Bytes2Terabytes},
        {"Kibibit", _Bytes2Kibibit},
        {"Mebibit", _Bytes2Mebibit},
        {"Gibibit", _Bytes2Gibibit},
        {"Tebibit", _Bytes2Tebibit}
    };

    std::map<std::string, std::function<double(double)>> conversionesKilobytes = {
        {"Bit", _Kilobytes2Bit},
        {"Bytes", _Kilobytes2Bytes},
        {"Kilobytes", [](double valor) { return valor; }},
        {"Megabytes", _Kilobytes2Megabytes},
        {"Gigabytes", _Kilobytes2Gigabytes},
        {"Terabytes", _Kilobytes2Terabytes},
        {"Kibibit", _Kilobytes2Kibibit},
        {"Mebibit", _Kilobytes2Mebibit},
        {"Gibibit", _Kilobytes2Gibibit},
        {"Tebibit", _Kilobytes2Tebibit}
    };

    std::map<std::string, std::function<double(double)>> conversionesMegabytes = {
        {"Bit", _Megabytes2Bit},
        {"Bytes", _Megabytes2Bytes},
        {"Kilobytes", _Megabytes2Kilobytes},
        {"Megabytes", [](double valor) { return valor; }},
        {"Gigabytes", _Megabytes2Gigabytes},
        {"Terabytes", _Megabytes2Terabytes},
        {"Kibibit", _Megabytes2Kibibit},
        {"Mebibit", _Megabytes2Mebibit},
        {"Gibibit", _Megabytes2Gibibit},
        {"Tebibit", _Megabytes2Tebibit}
    };

    std::map<std::string, std::function<double(double)>> conversionesGigabytes = {
        {"Bit", _Gigabytes2Bit},
        {"Bytes", _Gigabytes2Bytes},
        {"Kilobytes", _Gigabytes2Kilobytes},
        {"Megabytes", _Gigabytes2Megabytes},
        {"Gigabytes", [](double valor) { return valor; }},
        {"Terabytes", _Gigabytes2Terabytes},
        {"Kibibit", _Gigabytes2Kibibit},
        {"Mebibit", _Gigabytes2Mebibit},
        {"Gibibit", _Gigabytes2Gibibit},
        {"Tebibit", _Gigabytes2Tebibit}
    };

    std::map<std::string, std::function<double(double)>> conversionesTerabytes = {
        {"Bit", _Terabytes2Bit},
        {"Bytes", _Terabytes2Bytes},
        {"Kilobytes", _Terabytes2Kilobytes},
        {"Megabytes", _Terabytes2Megabytes},
        {"Gigabytes", _Terabytes2Gigabytes},
        {"Terabytes", [](double valor) { return valor; }},
        {"Kibibit", _Terabytes2Kibibit},
        {"Mebibit", _Terabytes2Mebibit},
        {"Gibibit", _Terabytes2Gibibit},
        {"Tebibit", _Terabytes2Tebibit}
    };

    std::map<std::string, std::function<double(double)>> conversionesKibibit = {
        {"Bit", _Kibibit2Bit},
        {"Bytes", _Kibibit2Bytes},
        {"Kilobytes", _Kibibit2Kilobytes},
        {"Megabytes", _Kibibit2Megabytes},
        {"Gigabytes", _Kibibit2Gigabytes},
        {"Terabytes", _Kibibit2Terabytes},
        {"Kibibit", [](double valor) { return valor; }},
        {"Mebibit", _Kibibit2Mebibit},
        {"Gibibit", _Kibibit2Gibibit},
        {"Tebibit", _Kibibit2Tebibit}
    };

    std::map<std::string, std::function<double(double)>> conversionesMebibit = {
        {"Bit", _Mebibit2Bit},
        {"Bytes", _Mebibit2Bytes},
        {"Kilobytes", _Mebibit2Kilobytes},
        {"Megabytes", _Mebibit2Megabytes},
        {"Gigabytes", _Mebibit2Gigabytes},
        {"Terabytes", _Mebibit2Terabytes},
        {"Kibibit", _Mebibit2Kibibit},
        {"Mebibit", [](double valor) { return valor; }},
        {"Gibibit", _Mebibit2Gibibit},
        {"Tebibit", _Mebibit2Tebibit}
    };

    std::map<std::string, std::function<double(double)>> conversionesGibibit = {
        {"Bit", _Gibibit2Bit},
        {"Bytes", _Gibibit2Bytes},
        {"Kilobytes", _Gibibit2Kilobytes},
        {"Megabytes", _Gibibit2Megabytes},
        {"Gigabytes", _Gibibit2Gigabytes},
        {"Terabytes", _Gibibit2Terabytes},
        {"Kibibit", _Gibibit2Kibibit},
        {"Mebibit", _Gibibit2Mebibit},
        {"Gibibit", [](double valor) { return valor; }},
        {"Tebibit", _Gibibit2Tebibit}
    };

    std::map<std::string, std::function<double(double)>> conversionesTebibit = {
        {"Bit", _Tebibit2Bit},
        {"Bytes", _Tebibit2Bytes},
        {"Kilobytes", _Tebibit2Kilobytes},
        {"Megabytes", _Tebibit2Megabytes},
        {"Gigabytes", _Tebibit2Gigabytes},
        {"Terabytes", _Tebibit2Terabytes},
        {"Kibibit", _Tebibit2Kibibit},
        {"Mebibit", _Tebibit2Mebibit},
        {"Gibibit", _Tebibit2Gibibit},
        {"Tebibit", [](double valor) { return valor; }}
    };

    // Función para buscar y ejecutar la conversión
    auto realizarConversion = [&](const QString& unidadOrigen, const QString& unidadDestino, double valor, auto& mapaConversiones) {
        std::string unidadDestino_std = unidadDestino.toStdString();
        auto conversionFunc = mapaConversiones.find(unidadDestino_std);
        if (conversionFunc != mapaConversiones.end()) {
            double resultado = conversionFunc->second(valor);
            ui->conversion_lbl->setText(QString::number(resultado));
        }
    };

    if (unidad1_text == "Centímetros") {
        realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesCentimetros);
    } else if (unidad1_text == "Milímetros") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesMilimetros);
    } else if (unidad1_text == "Kilómetros") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesKilometros);
    } else if (unidad1_text == "Metros") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesMetros);
    } else if (unidad1_text == "Pies") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesPies);
    } else if (unidad1_text == "Yardas") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesYardas);
    } else if (unidad1_text == "Millas") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesMillas);
    } else if (unidad1_text == "Pulgadas") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesPulgadas);
    }

    if (unidad1_text == "Mililitros") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesMililitros);
    } else if (unidad1_text == "Litros") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesLitros);
    } else if (unidad1_text == "Galones") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesGalones);
    }

    if (unidad1_text == "Gramos") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesGramos);
    } else if (unidad1_text == "Kilogramos") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesKilogramos);
    } else if (unidad1_text == "Libras") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesLibras);
    } else if (unidad1_text == "Onzas") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesOnzas);
    }

    if (unidad1_text == "Celsius") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesCelsius);
    } else if (unidad1_text == "Fahrenheit") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesFahrenheit);
    } else if (unidad1_text == "Kelvin") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesKelvin);
    }

    if (unidad1_text == "Milisegundos") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesMilisegundos);
    } else if (unidad1_text == "Segundos") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesSegundos);
    } else if (unidad1_text == "Minutos") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesMinutos);
    } else if (unidad1_text == "Horas") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesHoras);
    } else if (unidad1_text == "Días") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesDias);
    } else if (unidad1_text == "Semanas") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesSemanas);
    } else if (unidad1_text == "Años") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesAnios);

    } if (unidad1_text == "Bit") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesBit);
    } else if (unidad1_text == "Bytes") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesBytes);
    } else if (unidad1_text == "Kilobytes") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesKilobytes);
    } else if (unidad1_text == "Megabytes") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesMegabytes);
    } else if (unidad1_text == "Gigabytes") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesGigabytes);
    } else if (unidad1_text == "Terabytes") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesTerabytes);
    } else if (unidad1_text == "Kibibit") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesKibibit);
    } else if (unidad1_text == "Mebibit") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesMebibit);
    } else if (unidad1_text == "Gibibit") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesGibibit);
    } else if (unidad1_text == "Tebibit") {
    realizarConversion(unidad1_text, unidad2_text, unidad1, conversionesTebibit);
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



QString decimal2Binario(int decimal) {
    return QString::number(decimal, 2);
}

QString decimal2Hex(int decimal) {
    return QString::number(decimal, 16).toUpper();
}

QString hex2Decimal(const QString &hexString) {
    bool ok;
    int decimal = hexString.toInt(&ok, 16);
    if (!ok) {
       return "Hexadecimal inválido";
    }
    return QString::number(decimal);
}

QString hex2Binary(const QString &hexString) {
    return decimal2Binario(hex2Decimal(hexString).toInt());
}

QString binario2Decimal(const QString &binario) {
    bool ok;
    int decimal = binario.toInt(&ok, 2);
    if (!ok) {
       return "Binario inválido";
    }
    return QString::number(decimal);
}

QString binario2Hex(const QString &binario) {
    QString decimalString = binario2Decimal(binario);
    bool ok;
    int decimal = decimalString.toInt(&ok);
    if (!ok) {
       return "Binario inválido";
    }
    return decimal2Hex(decimal);
}

void Widget::on_valor_bases_num_textChanged(const QString &arg1)
{

    QString unidad1_text = ui->cbx_unidad1->currentText();
    QString unidad2_text = ui->cbx_unidad2->currentText();

    QString valorLabel = ui->valor_bases_num->text();
    QString resultado_conversion;

    if (unidad1_text == "Hexadecimal" && unidad2_text == "Binario") {
       resultado_conversion = hex2Binary(valorLabel);
    } else if (unidad1_text == "Hexadecimal" && unidad2_text == "Decimal") {
       resultado_conversion = hex2Decimal(valorLabel);
    } else if (unidad1_text == "Binario" && unidad2_text == "Hexadecimal") {
       resultado_conversion = binario2Hex(valorLabel);
    } else if (unidad1_text == "Binario" && unidad2_text == "Decimal") {
       resultado_conversion = binario2Decimal(valorLabel);
    } else if (unidad1_text == "Decimal" && unidad2_text == "Hexadecimal") {
       resultado_conversion = decimal2Hex(valorLabel.toInt());
    } else if (unidad1_text == "Decimal" && unidad2_text == "Binario") {
       resultado_conversion = decimal2Binario(valorLabel.toInt());
    }

    ui->conversion_lbl->setText(resultado_conversion);
}
