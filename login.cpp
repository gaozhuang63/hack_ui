#include "login.h"
#include "ui_login.h"
#include <QWidget>
#include <QTimer>
#include <QDebug>
#include <QIcon>
#include <QPixmap>
#include <QVBoxLayout>
#include "title_bar.h"
#include <QApplication>

#define TIMER_TIMEOUT   (0.08*1000)
#define STOPTIME (0.1*1000)


int nCurrentValue = 0;
int nCurrentValue1 = 0;
int nCurrentValue2 = 0;

login::login(QWidget *parent ) :
    QWidget(parent ),                //parent = 0 ui文件设置为非模态  子任务栏显示图标
    ui(new Ui::login)
{

    //自定义标题栏
   TitleBar *pTitleBar = new TitleBar(this);
   installEventFilter(pTitleBar);

    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    ui->setupUi(this);



    QPalette pal(palette());
    pal.setColor(QPalette::Background, QColor(50, 50, 50));
    setAutoFillBackground(true);
    setPalette(pal);

    ui->verticalLayout_4->addWidget(pTitleBar);
   // ui->verticalLayout_4->addStretch();           //弹簧导致屏幕不完整
    ui->verticalLayout_4->setSpacing(0);
    ui->verticalLayout_4->setContentsMargins(0, 0, 0, 0);
    ui->verticalLayout_4->setDirection(QBoxLayout::BottomToTop);//自下而上



    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/new/icon/pic/icon/ic_refresh.png")), QIcon::Normal, QIcon::Off);
    this->setWindowIcon(icon);
   // this->setIconsize(QSize(256, 256));

    ui->pushButton->setFlat(true);
    ui->pushButton->setStyleSheet("color:white");
    ui->pushButton_2->setFlat(true);
    ui->pushButton_2->setStyleSheet("color:white");
    ui->pushButton_3->setFlat(true);
    ui->pushButton_3->setStyleSheet("color:white");
    ui->pushButton_4->setFlat(true);
    ui->pushButton_4->setStyleSheet("color:white");
    ui->pushButton_5->setFlat(true);
    ui->pushButton_5->setStyleSheet("color:white");
    ui->pushButton_6->setFlat(true);
    ui->pushButton_6->setStyleSheet("color:white");
    ui->label->setWindowFlags(Qt::FramelessWindowHint);//无边框
    ui->label->setAttribute(Qt::WA_TranslucentBackground);//背景透明
    movie = new QMovie(":/new/unit/pic/unit/hash.gif");
    ui->label->setMovie(movie);
    movie->start();

    Timer = new QTimer(this);


    connect(Timer, SIGNAL(timeout()), this, SLOT(handleTimeout()));
    connect(Timer, SIGNAL(timeout()), this, SLOT(handleTimeout_2()));
    connect(Timer, SIGNAL(timeout()), this, SLOT(handleTimeout_1()));



    Timer->start(TIMER_TIMEOUT);



}

login::~login()
{
    delete ui;
}

//加载背景图
void login::paintEvent(QPaintEvent *)
{
    QPixmap pixmap = QPixmap(":/new/background/pic/background/worldmap.jpg").scaled(this->size());
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}

//向message_qemu界面发送信号
void login::on_pushButton_clicked()
{


   // message_qemu *msg_qemu = new message_qemu(this);//新建子界面
    connect(&msg_qemu,SIGNAL(send_signal()),this,SLOT(reshow()));//当点击子界面时，调用主界面的reshow()函数
    msg_qemu.show();//子界面出现
   // msg_qemu.showFullScreen();
    QTime currTime = QTime::currentTime();
    QTime dieTime = currTime.addMSecs(STOPTIME);       //延时显示 防止闪屏
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    this->hide();//界面隐藏
}

//界面重现
void login::reshow(){

    this->show();
    QTime currTime = QTime::currentTime();
    QTime dieTime = currTime.addMSecs(STOPTIME);       //延时显示 防止闪屏
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    msg_qemu.hide();
}


//超时处理
void login::handleTimeout()
{
    nCurrentValue++;
    if (nCurrentValue%3==0 ){
        ui->pushButton->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point.png);}");
        ui->pushButton->setFlat(true);
        ui->pushButton_3->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point.png);}");
        ui->pushButton_3->setFlat(true);
        //ui->pushButton->setStyleSheet("color:white");
    }
    else if (nCurrentValue%3 ==1 ){
        ui->pushButton->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point1.png);}");
        ui->pushButton->setFlat(true);
        ui->pushButton_3->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point1.png);}");
        ui->pushButton_3->setFlat(true);
       // ui->pushButton->setStyleSheet("color:white");
    }
    else if (nCurrentValue%3 ==2 ){
        ui->pushButton->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point2.png);}");
        ui->pushButton->setFlat(true);
        ui->pushButton_3->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point2.png);}");
        ui->pushButton_3->setFlat(true);
        //ui->pushButton->setStyleSheet("color:white");
    }

//    if(Timer->isActive()){
//           Timer->stop();
//    }

}

void login::handleTimeout_2()
{
    nCurrentValue1++;
    if (nCurrentValue1%3==0 ){
        ui->pushButton_2->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point2.png);}");
        ui->pushButton_2->setFlat(true);
        ui->pushButton_4->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point2.png);}");
        ui->pushButton_4->setFlat(true);
        //ui->pushButton->setStyleSheet("color:white");
    }
    else if (nCurrentValue1%3 ==1 ){
        ui->pushButton_2->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point.png);}");
        ui->pushButton_2->setFlat(true);
        ui->pushButton_4->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point.png);}");
        ui->pushButton_4->setFlat(true);
       // ui->pushButton->setStyleSheet("color:white");
    }
    else if (nCurrentValue1%3 ==2 ){
        ui->pushButton_2->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point1.png);}");
        ui->pushButton_2->setFlat(true);
        ui->pushButton_4->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point1.png);}");
        ui->pushButton_4->setFlat(true);
        //ui->pushButton->setStyleSheet("color:white");
    }
}

void login::handleTimeout_1()
{

    nCurrentValue2++;
    if (nCurrentValue2%3==0 ){
        ui->pushButton_5->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point1.png);}");
        ui->pushButton_5->setFlat(true);
        ui->pushButton_6->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point.png);}");
        ui->pushButton_6->setFlat(true);
        //ui->pushButton->setStyleSheet("color:white");
    }
    else if (nCurrentValue2%3 ==1 ){
        ui->pushButton_5->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point2.png);}");
        ui->pushButton_5->setFlat(true);
        ui->pushButton_6->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point2.png);}");
        ui->pushButton_6->setFlat(true);
       // ui->pushButton->setStyleSheet("color:white");
    }
    else if (nCurrentValue2%3 ==2 ){
        ui->pushButton_5->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point.png);}");
        ui->pushButton_5->setFlat(true);
        ui->pushButton_6->setStyleSheet("QPushButton{border-image: url(:/new/icon/pic/icon/point.png);}");
        ui->pushButton_6->setFlat(true);
        //ui->pushButton->setStyleSheet("color:white");
    }
}





//背景颜色透明
void login::ConvertImageToTransparent(QPixmap qPixmap)
{
    QImage image = qPixmap.toImage();
    image = image.convertToFormat(QImage::Format_ARGB32);
    union myrgb
    {
        uint rgba;
        uchar rgba_bits[4];
    };
    myrgb* mybits =(myrgb*) image.bits();
    int len = image.width()*image.height();
    while(len --> 0)
    {
        mybits->rgba_bits[3] = (mybits->rgba== 0xFFFFFFFF)?0:255;
        mybits++;
    }
}

void login::on_pushButton_2_clicked()
{
    test.show();
}
