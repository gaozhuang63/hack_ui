/********************************************************************************
** Form generated from reading UI file 'dlgwait.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGWAIT_H
#define UI_DLGWAIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DlgWait
{
public:
    QLabel *label;

    void setupUi(QDialog *DlgWait)
    {
        if (DlgWait->objectName().isEmpty())
            DlgWait->setObjectName(QString::fromUtf8("DlgWait"));
        DlgWait->resize(624, 418);
        label = new QLabel(DlgWait);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 600, 400));
        label->setMinimumSize(QSize(600, 400));

        retranslateUi(DlgWait);

        QMetaObject::connectSlotsByName(DlgWait);
    } // setupUi

    void retranslateUi(QDialog *DlgWait)
    {
        DlgWait->setWindowTitle(QApplication::translate("DlgWait", "Dialog", nullptr));
        label->setText(QApplication::translate("DlgWait", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgWait: public Ui_DlgWait {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGWAIT_H
