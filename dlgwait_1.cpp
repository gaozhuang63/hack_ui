#include "dlgwait_1.h"
#include "ui_dlgwait_1.h"
#include <QMovie>

dlgwait_1::dlgwait_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgwait_1)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);//无边框

    setAttribute(Qt::WA_TranslucentBackground);//背景透明

    //屏幕居中显示

    int frmX = width();

    int frmY = height();

    QWidget w;

    int deskWidth = w.width();

    int deskHeight = w.height();

    QPoint movePoint(deskWidth / 2 - frmX / 2, deskHeight / 2 - frmY / 2);

    move(movePoint);

    //加载gif图片

    movie = new QMovie(":/new/unit/pic/unit/access_denied.gif");

    ui->label->setMovie(movie);

    movie->start();
}

dlgwait_1::~dlgwait_1()
{
    delete ui;
}
