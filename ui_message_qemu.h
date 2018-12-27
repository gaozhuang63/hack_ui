/********************************************************************************
** Form generated from reading UI file 'message_qemu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_QEMU_H
#define UI_MESSAGE_QEMU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_message_qemu
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QWidget *tab_8;
    QWidget *tab_9;
    QWidget *tab_10;
    QWidget *tab_11;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_7;

    void setupUi(QWidget *message_qemu)
    {
        if (message_qemu->objectName().isEmpty())
            message_qemu->setObjectName(QString::fromUtf8("message_qemu"));
        message_qemu->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(message_qemu->sizePolicy().hasHeightForWidth());
        message_qemu->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(message_qemu);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(message_qemu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(1902, 1062));
        widget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(1884, 260));
        widget_3->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(371, 241));
        label->setMaximumSize(QSize(371, 241));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(1189, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(291, 241));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(291, 241));
        label_2->setMaximumSize(QSize(291, 241));
        label_2->setScaledContents(false);

        verticalLayout_3->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addWidget(widget_4);


        verticalLayout->addWidget(widget_3);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(1884, 777));
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget_2 = new QTabWidget(widget_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setStyleSheet(QString::fromUtf8(""));
        tabWidget_2->setIconSize(QSize(16, 16));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 100));
        pushButton->setMaximumSize(QSize(100, 100));

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 100));
        pushButton_2->setMaximumSize(QSize(100, 100));
        pushButton_2->setStyleSheet(QString::fromUtf8("pushButton_2->setStyleSheet(\"background-color: rgba(0, 0, 0, 0)\");"));

        gridLayout_3->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 100));
        pushButton_3->setMaximumSize(QSize(100, 100));

        gridLayout_3->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(100, 100));
        pushButton_6->setMaximumSize(QSize(100, 100));

        gridLayout_3->addWidget(pushButton_6, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(100, 100));
        pushButton_4->setMaximumSize(QSize(100, 100));

        gridLayout_3->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(100, 100));
        pushButton_5->setMaximumSize(QSize(100, 100));

        gridLayout_3->addWidget(pushButton_5, 1, 2, 1, 1);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tabWidget = new QTabWidget(tab_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(600, 400));
        label_3->setMaximumSize(QSize(600, 400));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidget->addTab(tab_2, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        tabWidget->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        tabWidget->addTab(tab_11, QString());

        verticalLayout_5->addWidget(tabWidget);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget_2->addTab(tab_7, QString());

        verticalLayout_4->addWidget(tabWidget_2);


        verticalLayout->addWidget(widget_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 3);

        verticalLayout_2->addWidget(widget);


        retranslateUi(message_qemu);

        tabWidget_2->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(message_qemu);
    } // setupUi

    void retranslateUi(QWidget *message_qemu)
    {
        message_qemu->setWindowTitle(QApplication::translate("message_qemu", "Configure", nullptr));
        label->setText(QApplication::translate("message_qemu", "TextLabel", nullptr));
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("message_qemu", "Com1", nullptr));
        pushButton_2->setText(QApplication::translate("message_qemu", "Com2", nullptr));
        pushButton_3->setText(QApplication::translate("message_qemu", "Com3", nullptr));
        pushButton_6->setText(QApplication::translate("message_qemu", "Com4", nullptr));
        pushButton_4->setText(QApplication::translate("message_qemu", "Com5", nullptr));
        pushButton_5->setText(QApplication::translate("message_qemu", "Com6", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("message_qemu", "RTA", nullptr));
        label_5->setText(QApplication::translate("message_qemu", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("message_qemu", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("message_qemu", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("message_qemu", "RTA", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("message_qemu", "Configure", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("message_qemu", "\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("message_qemu", "\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("message_qemu", "\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("message_qemu", "\351\241\265", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("message_qemu", "Configure", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("message_qemu", "\345\223\210", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("message_qemu", "\345\230\277", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("message_qemu", "\345\220\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class message_qemu: public Ui_message_qemu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_QEMU_H
