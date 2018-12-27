/********************************************************************************
** Form generated from reading UI file 'title_bar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLE_BAR_H
#define UI_TITLE_BAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_title_bar
{
public:

    void setupUi(QWidget *title_bar)
    {
        if (title_bar->objectName().isEmpty())
            title_bar->setObjectName(QString::fromUtf8("title_bar"));
        title_bar->resize(400, 300);

        retranslateUi(title_bar);

        QMetaObject::connectSlotsByName(title_bar);
    } // setupUi

    void retranslateUi(QWidget *title_bar)
    {
        title_bar->setWindowTitle(QApplication::translate("title_bar", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class title_bar: public Ui_title_bar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLE_BAR_H
