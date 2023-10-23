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

    void on_label_2_linkActivated(const QString &link);

    void on_consultar_btn_clicked();

    void on_cbx_categoria_editTextChanged(const QString &arg1);

    void on_valor_unidad1_valueChanged(double arg1);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
