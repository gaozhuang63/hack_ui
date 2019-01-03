#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMainWindow>
#include "message_qemu.h"
#include "login.h"
#include "dlgwait.h"
#include "dlgwait_1.h"
#include "fitwindow.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent =  nullptr);
    ~Widget();
    void paintEvent(QPaintEvent *);
    void ConvertImageToTransparent(QPixmap qPixmap);
    void resetGrid(QWidget *widget,double factorx,double factory);


    QMovie *movie;
    QMovie *movie_1;

    DlgWait * Dlg;
    dlgwait_1 * Dlg_1;

    int wid_x;
    int wid_y;


public slots:
    void reshow();
    void slotHideFinishedLabel();
    void slotHidefailed();

private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;

};

class Dialog:public QDialog
{
    Q_OBJECT;
public:
    explicit Dialog(QDialog *parent=0);
    ~Dialog();
    void dialogUse();
private slots:
    //这两个槽函数是当用户登陆到系统之后我规划要做的事情，但是后面我没有对其进行实现
    void findClick();
    void enableFindButton();


private:
    QDialog *dialog;

};



#endif // WIDGET_H
