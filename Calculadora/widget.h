#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

// Centimetros
extern "C" double _centimetros2metros(double unidad);
extern "C" double _centimetros2milimetros(double unidad);
extern "C" double _centimetros2kilometros(double unidad);
extern "C" double _centimetros2pulgadas(double unidad);
extern "C" double _centimetros2pies(double unidad);
extern "C" double _centimetros2yardas(double unidad);
extern "C" double _centimetros2millas(double unidad);

// Metros
extern "C" double _metros2centimetros(double unidad);
extern "C" double _metros2milimetros(double unidad);
extern "C" double _metros2kilometros(double unidad);
extern "C" double _metros2pulgadas(double unidad);
extern "C" double _metros2pies(double unidad);
extern "C" double _metros2yardas(double unidad);
extern "C" double _metros2millas(double unidad);

// Milimetros
extern "C" double _milimetros2centimetros(double unidad);
extern "C" double _milimetros2metros(double unidad);
extern "C" double _milimetros2kilometros(double unidad);
extern "C" double _milimetros2pulgadas(double unidad);
extern "C" double _milimetros2pies(double unidad);
extern "C" double _milimetros2yardas(double unidad);
extern "C" double _milimetros2millas(double unidad);

//Kilometros
extern "C" double _kilometros2metros(double unidad);
extern "C" double _kilometros2milimetros(double unidad);
extern "C" double _kilometros2centimetros(double unidad);
extern "C" double _kilometros2pulgadas(double unidad);
extern "C" double _kilometros2pies(double unidad);
extern "C" double _kilometros2yardas(double unidad);
extern "C" double _kilometros2millas(double unidad);

// Pulgadas
extern "C" double _pulgadas2metros(double unidad);
extern "C" double _pulgadas2milimetros(double unidad);
extern "C" double _pulgadas2kilometros(double unidad);
extern "C" double _pulgadas2centimetros(double unidad);
extern "C" double _pulgadas2pies(double unidad);
extern "C" double _pulgadas2yardas(double unidad);
extern "C" double _pulgadas2millas(double unidad);


// Pies
extern "C" double _pies2metros(double unidad);
extern "C" double _pies2milimetros(double unidad);
extern "C" double _pies2kilometros(double unidad);
extern "C" double _pies2centimetros(double unidad);
extern "C" double _pies2pulgadas(double unidad);
extern "C" double _pies2yardas(double unidad);
extern "C" double _pies2millas(double unidad);




// Yardas
extern "C" double _yardas2metros(double unidad);
extern "C" double _yardas2milimetros(double unidad);
extern "C" double _yardas2kilometros(double unidad);
extern "C" double _yardas2centimetros(double unidad);
extern "C" double _yardas2pies(double unidad);
extern "C" double _yardas2pulgadas(double unidad);
extern "C" double _yardas2millas(double unidad);




// MIllas
extern "C" double _millas2metros(double unidad);
extern "C" double _millas2milimetros(double unidad);
extern "C" double _millas2kilometros(double unidad);
extern "C" double _millas2centimetros(double unidad);
extern "C" double _millas2yardas(double unidad);
extern "C" double _millas2pies(double unidad);
extern "C" double _millas2yardas(double unidad);
extern "C" double _millas2pulgadas(double unidad);




// Pesos
// Onzas
extern "C" double _onzas2gramos(double unidad);
extern "C" double _onzas2kilogramos(double unidad);
extern "C" double _onzas2libras(double unidad);

// Libras
extern "C" double _libras2gramos(double unidad);
extern "C" double _libras2kilogramos(double unidad);
extern "C" double _libras2onzas(double unidad);

//Kilogramos
extern "C" double _kilogramos2gramos(double unidad);
extern "C" double _kilogramos2libras(double unidad);
extern "C" double _kilogramos2onzas(double unidad);

//Gramos
extern "C" double _gramos2kilogramos(double unidad);
extern "C" double _gramos2libras(double unidad);
extern "C" double _gramos2onzas(double unidad);



//VOLUMEN
//MILILITROS
extern "C" double _mililitros2litros(double unidad);
extern "C" double _mililitros2galones(double unidad);
extern "C" double _mililitros2metroscubicos(double unidad);
//LITROS
extern "C" double _litros2mililitros(double unidad);
extern "C" double _litros2metroscubicos(double unidad);
extern "C" double _litros2galones(double unidad);
//GALONES
extern "C" double _galones2mililitros(double unidad);
extern "C" double _galones2litros(double unidad);
extern "C" double _galones2metroscubicos(double unidad);
//METROS CUBICOS
extern "C" double _metroscubicos2mililitros(double unidad);
extern "C" double _metroscubicos2litros(double unidad);
extern "C" double _metroscubicos2galones(double unidad);

// Temperatura
extern "C" double _Celsius2Fahrenheit(double unidad);
extern "C" double _Celsius2Kelvin(double unidad);
extern "C" double _Kelvin2Fahrenheit(double unidad);
extern "C" double _Kelvin2Celsius(double unidad);
extern "C" double _Fahrenheit2Celsius(double unidad);
extern "C" double _Fahrenheit2Kelvin(double unidad);

// Tiempo
extern "C" double _Milisegundos2Segundos(double unidad);
extern "C" double _Milisegundos2Minutos(double unidad);
extern "C" double _Milisegundos2Horas(double unidad);
extern "C" double _Milisegundos2Días(double unidad);
extern "C" double _Milisegundos2Semanas(double unidad);
extern "C" double _Milisegundos2Anios(double unidad);

extern "C" double _Segundos2Minutos(double unidad);
extern "C" double _Segundos2Horas(double unidad);
extern "C" double _Segundos2Dias(double unidad);
extern "C" double _Segundos2Semanas(double unidad);
extern "C" double _Segundos2Anios(double unidad);
extern "C" double _Segundos2Milisegundos(double unidad);

extern "C" double _Minutos2Segundos(double unidad);
extern "C" double _Minutos2Horas(double unidad);
extern "C" double _Minutos2Dias(double unidad);
extern "C" double _Minutos2Semanas(double unidad);
extern "C" double _Minutos2Anios(double unidad);
extern "C" double _Minutos2Milisegundos(double unidad);

extern "C" double _Horas2Minutos(double unidad);
extern "C" double _Horas2Segundos(double unidad);
extern "C" double _Horas2Dias(double unidad);
extern "C" double _Horas2Semanas(double unidad);
extern "C" double _Horas2Anios(double unidad);
extern "C" double _Horas2Milisegundos(double unidad);

extern "C" double _Dias2Minutos(double unidad);
extern "C" double _Dias2Horas(double unidad);
extern "C" double _Dias2Segundos(double unidad);
extern "C" double _Dias2Semanas(double unidad);
extern "C" double _Dias2Anios(double unidad);
extern "C" double _Dias2Milisegundos(double unidad);

extern "C" double _Semanas2Minutos(double unidad);
extern "C" double _Semanas2Horas(double unidad);
extern "C" double _Semanas2Dias(double unidad);
extern "C" double _Semanas2Segundos(double unidad);
extern "C" double _Semanas2Anios(double unidad);
extern "C" double _Semanas2Milisegundos(double unidad);

extern "C" double _Anios2Minutos(double unidad);
extern "C" double _Anios2Horas(double unidad);
extern "C" double _Anios2Dias(double unidad);
extern "C" double _Anios2Semanas(double unidad);
extern "C" double _Anios2Segundos(double unidad);
extern "C" double _Anios2Milisegundos(double unidad);


//Datos

//Bit
extern "C" double _Bit2Kilobytes(double unidad);
extern "C" double _Bit2Bytes(double unidad);
extern "C" double _Bit2Megabytes(double unidad);
extern "C" double _Bit2Gigabytes(double unidad);
extern "C" double _Bit2Terabytes(double unidad);
extern "C" double _Bit2Kibibit(double unidad);
extern "C" double _Bit2Mebibit(double unidad);
extern "C" double _Bit2Gibibit(double unidad);
extern "C" double _Bit2Tebibit(double unidad);


//Bytes
extern "C" double _Bytes2Kilobytes(double unidad);
extern "C" double _Bytes2Bit(double unidad);
extern "C" double _Bytes2Megabytes(double unidad);
extern "C" double _Bytes2Gigabytes(double unidad);
extern "C" double _Bytes2Terabytes(double unidad);
extern "C" double _Bytes2Kibibit(double unidad);
extern "C" double _Bytes2Mebibit(double unidad);
extern "C" double _Bytes2Gibibit(double unidad);
extern "C" double _Bytes2Tebibit(double unidad);



//Kilobytes
extern "C" double _Kilobytes2Bytes(double unidad);
extern "C" double _Kilobytes2Bit(double unidad);
extern "C" double _Kilobytes2Megabytes(double unidad);
extern "C" double _Kilobytes2Gigabytes(double unidad);
extern "C" double _Kilobytes2Terabytes(double unidad);
extern "C" double _Kilobytes2Kibibit(double unidad);
extern "C" double _Kilobytes2Mebibit(double unidad);
extern "C" double _Kilobytes2Gibibit(double unidad);
extern "C" double _Kilobytes2Tebibit(double unidad);

//Megabytes
extern "C" double _Megabytes2Bytes(double unidad);
extern "C" double _Megabytes2Bit(double unidad);
extern "C" double _Megabytes2Kilobytes(double unidad);
extern "C" double _Megabytes2Gigabytes(double unidad);
extern "C" double _Megabytes2Terabytes(double unidad);
extern "C" double _Megabytes2Kibibit(double unidad);
extern "C" double _Megabytes2Mebibit(double unidad);
extern "C" double _Megabytes2Gibibit(double unidad);
extern "C" double _Megabytes2Tebibit(double unidad);


//Gigabytes
extern "C" double _Gigabytes2Bytes(double unidad);
extern "C" double _Gigabytes2Bit(double unidad);
extern "C" double _Gigabytes2Kilobytes(double unidad);
extern "C" double _Gigabytes2Megabytes(double unidad);
extern "C" double _Gigabytes2Terabytes(double unidad);
extern "C" double _Gigabytes2Kibibit(double unidad);
extern "C" double _Gigabytes2Mebibit(double unidad);
extern "C" double _Gigabytes2Gibibit(double unidad);
extern "C" double _Gigabytes2Tebibit(double unidad);



//Terabytes
extern "C" double _Terabytes2Bytes(double unidad);
extern "C" double _Terabytes2Bit(double unidad);
extern "C" double _Terabytes2Kilobytes(double unidad);
extern "C" double _Terabytes2Megabytes(double unidad);
extern "C" double _Terabytes2Gigabytes(double unidad);
extern "C" double _Terabytes2Kibibit(double unidad);
extern "C" double _Terabytes2Mebibit(double unidad);
extern "C" double _Terabytes2Gibibit(double unidad);
extern "C" double _Terabytes2Tebibit(double unidad);


//Kibibit
extern "C" double _Kibibit2Bytes(double unidad);
extern "C" double _Kibibit2Bit(double unidad);
extern "C" double _Kibibit2Kilobytes(double unidad);
extern "C" double _Kibibit2Megabytes(double unidad);
extern "C" double _Kibibit2Gigabytes(double unidad);
extern "C" double _Kibibit2Terabytes(double unidad);
extern "C" double _Kibibit2Mebibit(double unidad);
extern "C" double _Kibibit2Gibibit(double unidad);
extern "C" double _Kibibit2Tebibit(double unidad);


//Mebibit
extern "C" double _Mebibit2Bytes(double unidad);
extern "C" double _Mebibit2Bit(double unidad);
extern "C" double _Mebibit2Kilobytes(double unidad);
extern "C" double _Mebibit2Megabytes(double unidad);
extern "C" double _Mebibit2Gigabytes(double unidad);
extern "C" double _Mebibit2Terabytes(double unidad);
extern "C" double _Mebibit2Kibibit(double unidad);
extern "C" double _Mebibit2Gibibit(double unidad);
extern "C" double _Mebibit2Tebibit(double unidad);


//Gibibit
extern "C" double _Gibibit2Bytes(double unidad);
extern "C" double _Gibibit2Bit(double unidad);
extern "C" double _Gibibit2Kilobytes(double unidad);
extern "C" double _Gibibit2Megabytes(double unidad);
extern "C" double _Gibibit2Gigabytes(double unidad);
extern "C" double _Gibibit2Terabytes(double unidad);
extern "C" double _Gibibit2Kibibit(double unidad);
extern "C" double _Gibibit2Mebibit(double unidad);
extern "C" double _Gibibit2Tebibit(double unidad);

//Tebibit
extern "C" double _Tebibit2Bytes(double unidad);
extern "C" double _Tebibit2Bit(double unidad);
extern "C" double _Tebibit2Kilobytes(double unidad);
extern "C" double _Tebibit2Megabytes(double unidad);
extern "C" double _Tebibit2Gigabytes(double unidad);
extern "C" double _Tebibit2Terabytes(double unidad);
extern "C" double _Tebibit2Kibibit(double unidad);
extern "C" double _Tebibit2Mebibit(double unidad);
extern "C" double _Tebibit2Gibibit(double unidad);




QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:
    void on_cbx_categoria_currentTextChanged(const QString &arg1);

    void on_cbx_categoria_editTextChanged(const QString &arg1);

    void on_valor_unidad1_valueChanged();

    void on_cbx_unidad1_currentTextChanged();

    void on_cbx_unidad2_currentTextChanged();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
