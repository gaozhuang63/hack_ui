#include "message_qemu.h"
#include "ui_message_qemu.h"
#include <QMainWindow>
#include <QDebug>
#include <QTabWidget>
#include <QMovie>
#include <QVBoxLayout>
#include "title_bar.h"

message_qemu::message_qemu(QWidget *parent) :
    QDialog (parent),
    ui(new Ui::message_qemu)
{
    TitleBar *pTitleBar = new TitleBar(this);
    installEventFilter(pTitleBar);

    ui->setupUi(this);

    //自定义标题栏
    this->setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    QPalette pal(palette());
    pal.setColor(QPalette::Background, QColor(50, 50, 50));
    setAutoFillBackground(true);
    setPalette(pal);

    ui->verticalLayout_2->addWidget(pTitleBar);
    ui->verticalLayout_2->addStretch();
    ui->verticalLayout_2->setSpacing(0);
    ui->verticalLayout_2->setContentsMargins(0, 0, 0, 0);
    ui->verticalLayout_2->setDirection(QBoxLayout::BottomToTop);//自下而上


    ui->tabWidget->tabBar()->setStyle(new CustomTabStyle);                             //设置横向文字

   // ui->tabWidget->setStyleSheet("}");          //背景透明
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/new/icon/pic/icon/icon_classify.png")), QIcon::Normal, QIcon::Off);     //系统图标
    this->setWindowIcon(icon);
    //this->setWindowFlag(Qt::CustomizeWindowHint);

    QMovie *movie = new QMovie(":/new/unit/pic/unit/code.gif");
    ui->label_2->setMovie(movie);
    movie->start();



    QMovie *movie_1 = new QMovie(":/new/unit/pic/unit/sc_db.gif");
    ui->label_3->setMovie(movie_1);
    movie_1->start();

    QIcon button_ico_on(":/new/icon/pic/icon/com_online.png");
    QIcon button_ico_off(":/new/icon/pic/icon/com_offline.png");

    ui->pushButton->setIcon(button_ico_off);
    ui->pushButton->setMinimumSize(150,150);
    ui->pushButton->setMaximumSize(150,150);
    ui->pushButton->setIconSize(QSize(80,80));
    ui->pushButton->setFlat(true);                                      //按钮无边框
    ui->pushButton->setStyleSheet("color:white");                       //按钮背景透明 对ICon无效
    //ui->pushButton->setStyleSheet("border:none;");                      //按钮背景透明 按下无反馈

    ui->pushButton_2->setIcon(button_ico_off);
    ui->pushButton_2->setMinimumSize(150,150);
    ui->pushButton_2->setMaximumSize(150,150);
    ui->pushButton_2->setIconSize(QSize(80,80));
    ui->pushButton_2->setFlat(true);
    ui->pushButton_2->setStyleSheet("color:white");
    //ui->pushButton_2->setStyleSheet("border:none;");


    ui->pushButton_3->setIcon(button_ico_off);
    ui->pushButton_3->setMinimumSize(150,150);
    ui->pushButton_3->setMaximumSize(150,150);
    ui->pushButton_3->setIconSize(QSize(80,80));
    ui->pushButton_3->setFlat(true);
    ui->pushButton_3->setStyleSheet("color:white");

    ui->pushButton_4->setIcon(button_ico_off);
    ui->pushButton_4->setMinimumSize(150,150);
    ui->pushButton_4->setMaximumSize(150,150);
    ui->pushButton_4->setIconSize(QSize(80,80));
    ui->pushButton_4->setFlat(true);
    ui->pushButton_4->setStyleSheet("color:white");

    ui->pushButton_5->setIcon(button_ico_off);
    ui->pushButton_5->setMinimumSize(150,150);
    ui->pushButton_5->setMaximumSize(150,150);
    ui->pushButton_5->setIconSize(QSize(80,80));
    ui->pushButton_5->setFlat(true);
    ui->pushButton_5->setStyleSheet("color:white");

    ui->pushButton_6->setIcon(button_ico_off);
    ui->pushButton_6->setMinimumSize(150,150);
    ui->pushButton_6->setMaximumSize(150,150);
    ui->pushButton_6->setIconSize(QSize(80,80));
    ui->pushButton_6->setFlat(true);
    ui->pushButton_6->setStyleSheet("color:white");




    this->setAttribute(Qt::WA_DeleteOnClose,1);     //子窗口关闭销毁
    qDebug()<<"构造了video窗口"<<endl;

}

message_qemu::~message_qemu()
{
    delete ui;
}


//加载背景图
void message_qemu::paintEvent(QPaintEvent *)
{
    QPixmap pixmap = QPixmap(":/new/background/pic/background/background1.jpg").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}


void message_qemu::on_pushButton_clicked()
{
    emit send_signal();
    this->hide();
}

