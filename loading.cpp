#include "loading.h"
#include "ui_loading.h"
#include <QMovie>
#include <QDesktopWidget>



loading::loading(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loading)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);// 去掉标题栏,去掉任务栏显示，窗口置顶
    setAttribute(Qt::WA_TranslucentBackground);//背景透明
    setAttribute(Qt::WA_DeleteOnClose);//关闭窗体时销毁窗口 使得再次打开窗体gif动画重新播放

//    //屏幕居中显示
//    int frmX = width();
//    int frmY = height();
//    QWidget w;
//    int deskWidth = w.width();
//    int deskHeight = w.height();
//    QPoint movePoint(deskWidth / 2 - frmX / 2, deskHeight / 2 - frmY / 2);
//    move(movePoint);

//    QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
//    move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);

    //加载gif图片
    movie = new QMovie(":/new/unit/pic/unit/downloading.gif");
    ui->label->setMovie(movie);
    movie->start();

}

loading::~loading()
{
    delete ui;
    delete movie;
}

