#include "test.h"
#include "ui_test.h"
#include "title_bar.h"
#include <QMovie>

test::test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::test)
{

    //自定义标题栏
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);// 去掉标题栏,去掉任务栏显示，窗口置顶
    setAttribute(Qt::WA_TranslucentBackground);//背景透明
    setAttribute(Qt::WA_DeleteOnClose);//关闭窗体时销毁窗口 使得再次打开窗体gif动画重新播放

    QMovie *movie= new QMovie(":/new/unit/pic/unit/sc_db.gif");
    ui->label->setMovie(movie);
    movie->start();


}

test::~test()
{
    delete ui;
}
