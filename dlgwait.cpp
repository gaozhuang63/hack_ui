#include "dlgwait.h"
#include "ui_dlgwait.h"
#include <QWidget>
#include <QMovie>
#include <QLabel>
#include <QDesktopWidget>

DlgWait::DlgWait(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgWait)
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

    movie = new QMovie(":/new/unit/pic/unit/access_granted.gif");

    ui->label->setMovie(movie);

    movie->start();
}

DlgWait::~DlgWait()
{
    delete ui;
}
