/********************************************************************************
** Form generated from reading UI file 'loading.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loading
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *loading)
    {
        if (loading->objectName().isEmpty())
            loading->setObjectName(QString::fromUtf8("loading"));
        loading->resize(568, 191);
        loading->setMinimumSize(QSize(550, 173));
        loading->setMaximumSize(QSize(568, 191));
        verticalLayout_2 = new QVBoxLayout(loading);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(loading);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(550, 183));
        widget->setMaximumSize(QSize(550, 183));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(132, 132, 132)"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(500, 70));
        label_2->setMaximumSize(QSize(500, 70));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(179, 2, 5);\n"
"font: 87 36pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(500, 113));
        label->setMaximumSize(QSize(500, 113));

        verticalLayout->addWidget(label);


        verticalLayout_2->addWidget(widget);


        retranslateUi(loading);

        QMetaObject::connectSlotsByName(loading);
    } // setupUi

    void retranslateUi(QWidget *loading)
    {
        loading->setWindowTitle(QApplication::translate("loading", "Form", nullptr));
        label_2->setText(QApplication::translate("loading", "<html><head/><body><p align=\"center\">Downloading...</p></body></html>", nullptr));
        label->setText(QApplication::translate("loading", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loading: public Ui_loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
