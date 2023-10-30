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
