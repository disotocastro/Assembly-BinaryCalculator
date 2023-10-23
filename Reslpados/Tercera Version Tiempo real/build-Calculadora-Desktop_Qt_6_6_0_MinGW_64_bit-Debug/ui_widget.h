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
    QPushButton *consultar_btn;
    QComboBox *cbx_categoria;
    QLabel *titlo_lbl;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *resultado_lbl;
    QLabel *conversion_lbl;
    QWidget *layoutWidget1;
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
        consultar_btn = new QPushButton(Widget);
        consultar_btn->setObjectName("consultar_btn");
        consultar_btn->setGeometry(QRect(120, 220, 75, 24));
        cbx_categoria = new QComboBox(Widget);
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->setObjectName("cbx_categoria");
        cbx_categoria->setGeometry(QRect(50, 70, 231, 22));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        cbx_categoria->setFont(font);
        cbx_categoria->setContextMenuPolicy(Qt::DefaultContextMenu);
        cbx_categoria->setLayoutDirection(Qt::LeftToRight);
        titlo_lbl = new QLabel(Widget);
        titlo_lbl->setObjectName("titlo_lbl");
        titlo_lbl->setGeometry(QRect(60, 10, 211, 51));
        titlo_lbl->setLayoutDirection(Qt::LeftToRight);
        titlo_lbl->setTextFormat(Qt::MarkdownText);
        titlo_lbl->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 280, 261, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        resultado_lbl = new QLabel(layoutWidget);
        resultado_lbl->setObjectName("resultado_lbl");
        QFont font1;
        font1.setPointSize(12);
        resultado_lbl->setFont(font1);

        horizontalLayout->addWidget(resultado_lbl);

        conversion_lbl = new QLabel(layoutWidget);
        conversion_lbl->setObjectName("conversion_lbl");
        conversion_lbl->setFont(font1);

        horizontalLayout->addWidget(conversion_lbl);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 120, 233, 61));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        valor_unidad1 = new QDoubleSpinBox(layoutWidget1);
        valor_unidad1->setObjectName("valor_unidad1");
        valor_unidad1->setWrapping(false);
        valor_unidad1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        valor_unidad1->setDecimals(5);
        valor_unidad1->setMinimum(-9999999999.000000000000000);
        valor_unidad1->setMaximum(999999999999.000000000000000);
        valor_unidad1->setSingleStep(1.000000000000000);
        valor_unidad1->setStepType(QAbstractSpinBox::DefaultStepType);

        formLayout->setWidget(0, QFormLayout::LabelRole, valor_unidad1);

        cbx_unidad1 = new QComboBox(layoutWidget1);
        cbx_unidad1->setObjectName("cbx_unidad1");

        formLayout->setWidget(0, QFormLayout::FieldRole, cbx_unidad1);

        valor_unidad2 = new QDoubleSpinBox(layoutWidget1);
        valor_unidad2->setObjectName("valor_unidad2");
        valor_unidad2->setWrapping(false);
        valor_unidad2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        valor_unidad2->setDecimals(5);
        valor_unidad2->setMinimum(-9999999999.000000000000000);
        valor_unidad2->setMaximum(999999999999.000000000000000);
        valor_unidad2->setSingleStep(1.000000000000000);
        valor_unidad2->setStepType(QAbstractSpinBox::DefaultStepType);

        formLayout->setWidget(1, QFormLayout::LabelRole, valor_unidad2);

        cbx_unidad2 = new QComboBox(layoutWidget1);
        cbx_unidad2->setObjectName("cbx_unidad2");

        formLayout->setWidget(1, QFormLayout::FieldRole, cbx_unidad2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        consultar_btn->setText(QCoreApplication::translate("Widget", "Consultar", nullptr));
        cbx_categoria->setItemText(0, QCoreApplication::translate("Widget", "Seleccionar Categor\303\255a", nullptr));
        cbx_categoria->setItemText(1, QCoreApplication::translate("Widget", "Distancia", nullptr));
        cbx_categoria->setItemText(2, QCoreApplication::translate("Widget", "Volumen", nullptr));
        cbx_categoria->setItemText(3, QCoreApplication::translate("Widget", "Peso", nullptr));
        cbx_categoria->setItemText(4, QCoreApplication::translate("Widget", "Temperatura", nullptr));
        cbx_categoria->setItemText(5, QCoreApplication::translate("Widget", "Tiempo", nullptr));
        cbx_categoria->setItemText(6, QCoreApplication::translate("Widget", "Datos", nullptr));
        cbx_categoria->setItemText(7, QCoreApplication::translate("Widget", "Num\303\251rico", nullptr));

#if QT_CONFIG(tooltip)
        cbx_categoria->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        cbx_categoria->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        cbx_categoria->setCurrentText(QCoreApplication::translate("Widget", "Seleccionar Categor\303\255a", nullptr));
        titlo_lbl->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:16pt; color:#00aaff;\">Calculadora de Unidades</span></p></body></html>", nullptr));
        resultado_lbl->setText(QCoreApplication::translate("Widget", "Resultado =", nullptr));
        conversion_lbl->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
