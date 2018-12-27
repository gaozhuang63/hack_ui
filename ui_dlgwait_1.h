/********************************************************************************
** Form generated from reading UI file 'dlgwait_1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGWAIT_1_H
#define UI_DLGWAIT_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_dlgwait_1
{
public:
    QLabel *label;

    void setupUi(QDialog *dlgwait_1)
    {
        if (dlgwait_1->objectName().isEmpty())
            dlgwait_1->setObjectName(QString::fromUtf8("dlgwait_1"));
        dlgwait_1->resize(624, 418);
        label = new QLabel(dlgwait_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 600, 400));

        retranslateUi(dlgwait_1);

        QMetaObject::connectSlotsByName(dlgwait_1);
    } // setupUi

    void retranslateUi(QDialog *dlgwait_1)
    {
        dlgwait_1->setWindowTitle(QApplication::translate("dlgwait_1", "Dialog", nullptr));
        label->setText(QApplication::translate("dlgwait_1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgwait_1: public Ui_dlgwait_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGWAIT_1_H
