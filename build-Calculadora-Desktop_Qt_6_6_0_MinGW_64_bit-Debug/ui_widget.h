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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *resultado;
    QComboBox *cbx_categoria;
    QComboBox *cbx_unidad1;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(308, 232);
        doubleSpinBox = new QDoubleSpinBox(Widget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(129, 61, 161, 22));
        doubleSpinBox_2 = new QDoubleSpinBox(Widget);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setGeometry(QRect(129, 91, 161, 22));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 62, 47, 16));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 90, 47, 16));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 120, 75, 24));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 160, 61, 16));
        resultado = new QLabel(Widget);
        resultado->setObjectName("resultado");
        resultado->setGeometry(QRect(90, 160, 49, 16));
        cbx_categoria = new QComboBox(Widget);
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->addItem(QString());
        cbx_categoria->setObjectName("cbx_categoria");
        cbx_categoria->setGeometry(QRect(10, 20, 69, 22));
        cbx_unidad1 = new QComboBox(Widget);
        cbx_unidad1->setObjectName("cbx_unidad1");
        cbx_unidad1->setGeometry(QRect(210, 150, 69, 22));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Unidad 1", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Unidad 2", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Consultar", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Resultado", nullptr));
        resultado->setText(QCoreApplication::translate("Widget", "xxxxxxx", nullptr));
        cbx_categoria->setItemText(0, QCoreApplication::translate("Widget", "Temperatura", nullptr));
        cbx_categoria->setItemText(1, QCoreApplication::translate("Widget", "Distancia", nullptr));
        cbx_categoria->setItemText(2, QCoreApplication::translate("Widget", "Volumen", nullptr));
        cbx_categoria->setItemText(3, QCoreApplication::translate("Widget", "Peso", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
