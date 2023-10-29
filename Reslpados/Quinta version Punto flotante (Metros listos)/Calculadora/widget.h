#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
