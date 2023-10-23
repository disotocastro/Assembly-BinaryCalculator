/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *boton_consultar;
    QComboBox *cbx_categoria;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *resultado;
    QWidget *widget1;
    QFormLayout *formLayout;
    QDoubleSpinBox *valor_unidad1;
    QComboBox *cbx_unidad1;
    QDoubleSpinBox *valor_unidad2;
    QComboBox *cbx_unidad2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(308, 317);
        boton_consultar = new QPushButton(Widget);
        boton_consultar->setObjectName("boton_consultar");
        boton_consultar->setGeometry(QRect(120, 200, 75, 24));
        cbx_categoria = new QComboBox(Widget);
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->setObjectName("cbx_categoria");
        cbx_categoria->setGeometry(QRect(60, 80, 181, 22));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        cbx_categoria->setFont(font);
        cbx_categoria->setContextMenuPolicy(Qt::DefaultContextMenu);
        cbx_categoria->setLayoutDirection(Qt::LeftToRight);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 291, 51));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::MarkdownText);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 260, 102, 18));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        resultado = new QLabel(widget);
        resultado->setObjectName("resultado");

        horizontalLayout->addWidget(resultado);

        widget1 = new QWidget(Widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(57, 121, 187, 52));
        formLayout = new QFormLayout(widget1);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        valor_unidad1 = new QDoubleSpinBox(widget1);
        valor_unidad1->setObjectName("valor_unidad1");
        valor_unidad1->setWrapping(false);
        valor_unidad1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        valor_unidad1->setDecimals(5);
        valor_unidad1->setMinimum(-9999999999.000000000000000);
        valor_unidad1->setMaximum(999999999999.000000000000000);
        valor_unidad1->setSingleStep(1.000000000000000);
        valor_unidad1->setStepType(QAbstractSpinBox::DefaultStepType);

        formLayout->setWidget(0, QFormLayout::LabelRole, valor_unidad1);

        cbx_unidad1 = new QComboBox(widget1);
        cbx_unidad1->setObjectName("cbx_unidad1");

        formLayout->setWidget(0, QFormLayout::FieldRole, cbx_unidad1);

        valor_unidad2 = new QDoubleSpinBox(widget1);
        valor_unidad2->setObjectName("valor_unidad2");
        valor_unidad2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        valor_unidad2->setProperty("showGroupSeparator", QVariant(false));
        valor_unidad2->setDecimals(5);
        valor_unidad2->setMinimum(-9999999999.000000000000000);
        valor_unidad2->setMaximum(9999999999.000000000000000);

        formLayout->setWidget(1, QFormLayout::LabelRole, valor_unidad2);

        cbx_unidad2 = new QComboBox(widget1);
        cbx_unidad2->setObjectName("cbx_unidad2");

        formLayout->setWidget(1, QFormLayout::FieldRole, cbx_unidad2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        boton_consultar->setText(QCoreApplication::translate("Widget", "Consultar", nullptr));
        cbx_categoria->setItemText(0, QCoreApplication::translate("Widget", "Distancia", nullptr));
        cbx_categoria->setItemText(1, QCoreApplication::translate("Widget", "Volumen", nullptr));
        cbx_categoria->setItemText(2, QCoreApplication::translate("Widget", "Peso", nullptr));
        cbx_categoria->setItemText(3, QCoreApplication::translate("Widget", "Temperatura", nullptr));
        cbx_categoria->setItemText(4, QCoreApplication::translate("Widget", "Tiempo", nullptr));
        cbx_categoria->setItemText(5, QCoreApplication::translate("Widget", "Datos", nullptr));
        cbx_categoria->setItemText(6, QCoreApplication::translate("Widget", "Num\303\251rico", nullptr));

#if QT_CONFIG(tooltip)
        cbx_categoria->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        cbx_categoria->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        cbx_categoria->setCurrentText(QCoreApplication::translate("Widget", "Distancia", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:16pt; color:#00aaff;\">Calculadora de Unidades</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Resultado", nullptr));
        resultado->setText(QCoreApplication::translate("Widget", "xxxxxxx", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
