#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QLabel>
#include <QWidget>
#include <QMovie>
#include <QCloseEvent>
#include <QMessageBox>
#include <QDialog>
#include <QMainWindow>
#include <QHBoxLayout>
#include "title_bar.h"
#include <QTimer>
#include <QApplication>
#include <QDesktopWidget>
#include <QTime>

#define STOPTIME (0.1*1000)

class Dialog;


Widget::Widget(QWidget *parent) :
    QWidget (parent),

    ui(new Ui::Widget)
{

    TitleBar *pTitleBar = new TitleBar(this);
    installEventFilter(pTitleBar);
    //自定义标题栏
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint | windowFlags());

    QPalette pal(palette());
    pal.setColor(QPalette::Background, QColor(50, 50, 50));
    setAutoFillBackground(true);
    setPalette(pal);

    ui->verticalLayout_6->addWidget(pTitleBar);
    ui->verticalLayout_6->setSpacing(0);
    ui->verticalLayout_6->setContentsMargins(0, 0, 0, 0);
    ui->verticalLayout_6->setDirection(QBoxLayout::BottomToTop);//自下而上

    wid_x=width();
    wid_y=height();

    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/new/icon/pic/icon/ic_more_safe.png")), QIcon::Normal, QIcon::Off);
    this->setWindowIcon(icon);
    //this->setWindowFlag(this->windowFlags());
    ui->lineEdit->setPlaceholderText(QString::fromLocal8Bit("ID"));//设置ID提示
    ui->lineEdit->setMaxLength(16);//设置最大长度16位
    ui->lineEdit->setStyleSheet("QLineEdit{border-width:1px;border-radius:4px;font-size:12px;color:black;border:1px solid grey;}"
            "QLineEdit:hover{border-width:1px;border-radius:4px;font-size:12px;color:black;border:2px solid rgb(144,0,0);}");
    ui->lineEdit_2->setPlaceholderText(QString::fromLocal8Bit("PassWord"));//设置密码提示
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);//当输入密码时，显示为*******
    ui->lineEdit_2->setStyleSheet("QLineEdit{border-width:1px;border-radius:4px;font-size:12px;color:black;border:1px solid grey;}"
            "QLineEdit:hover{border-width:1px;border-radius:4px;font-size:12px;color:black;border:2px solid rgb(144,0,0);}");
    ui->lineEdit_2->setMaxLength(16);//设置最大长度16位

    ui->pushButton->setStyleSheet(//正常状态样式
                                  "QPushButton{"
                                  "background-color:rgba(255,255,255,233);"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:6px;"                   //边框圆角半径像素
                                  "border-color:rgba(144,144,144,200);"    //边框颜色
                                  "font:黑体 12px;"                       //字体，字体大小
                                  //"color:rgba(0,0,0,255);"                //字体颜色
                                  //"padding:10px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:rgba(51,102,205,200);"
                                  "border-color:rgba(255,255,255,30);"
                                  "border-style:inset;"
                                  "color:rgba(0,0,0,100);"
                                  "}"
                                  //鼠标悬停样式
                                  "QPushButton:hover{"
                                  "border: 1px solid #3C80B1;"
                                  "background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgba(181, 225, 250, 255), stop:0.50001 rgba(222, 242, 251, 255));"
                                  "border-radius:5px;"
                                  "}"
                                  );
    ui->pushButton_2->setStyleSheet(//正常状态样式
                                    "QPushButton{"
                                    "background-color:rgba(255,255,255,233);"//背景色（也可以设置图片）
                                    "border-style:outset;"                  //边框样式（inset/outset）
                                    "border-width:4px;"                     //边框宽度像素
                                    "border-radius:6px;"                   //边框圆角半径像素
                                    "border-color:rgba(144,144,144,200);"    //边框颜色
                                    "font:黑体 12px;"                       //字体，字体大小
                                    //"color:rgba(0,0,0,255);"                //字体颜色
                                    //"padding:10px;"                          //填衬
                                    "}"
                                    //鼠标按下样式
                                    "QPushButton:pressed{"
                                    "background-color:rgba(51,102,205,200);"
                                    "border-color:rgba(255,255,255,30);"
                                    "border-style:inset;"
                                    "color:rgba(0,0,0,100);"
                                    "}"
                                    //鼠标悬停样式
                                    "QPushButton:hover{"
                                    "border: 1px solid #3C80B1;"
                                    "background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgba(181, 225, 250, 255), stop:0.50001 rgba(222, 242, 251, 255));"
                                    "border-radius:5px;"
                                    "}"
                                    );

    ui->label->setStyleSheet("color:white;");
    ui->label_2->setStyleSheet("color:white;");
    ui->label_3->setWindowFlags(Qt::FramelessWindowHint);//无边框
    ui->label_3->setAttribute(Qt::WA_TranslucentBackground);//背景透明
    movie = new QMovie(":/new/unit/pic/unit/unit2.gif");
    ui->label_3->setMovie(movie);
    movie->start();

    ui->label_4->setWindowFlags(Qt::FramelessWindowHint);//无边框
    ui->label_4->setAttribute(Qt::WA_TranslucentBackground);//背景透明
    movie_1 = new QMovie(":/new/unit/pic/unit/unit1.gif");
    ui->label_4->setMovie(movie_1);
    movie_1->start();


}

Widget::~Widget()
{
    delete ui;
}

//加载背景图
void Widget::paintEvent(QPaintEvent *)
{
    QPixmap pixmap = QPixmap(":/new/background/pic/background/page.jpg").scaled(this->size()); //scaled 缩放背景
    QPainter painter(this);
    painter.drawPixmap(this->rect(), pixmap);
}

void Widget::on_pushButton_clicked()
{

    if(this->ui->lineEdit->text().trimmed() == tr("test") &&
            this->ui->lineEdit_2->text().trimmed()== tr("test123"))  //去除lineEdit内的用户名和密码进行校验
    {
        //登陆成功
        Dlg = new DlgWait(this);
        Dlg->show();
        Dlg->move((wid_x - Dlg->width())/2,(wid_y - Dlg->height())/2);
        QTimer::singleShot(3000, this, SLOT(slotHideFinishedLabel()));  // 这里是一个3秒定时器， 且只执行一次。

    }
    else
    {
        //用户输入存在错误
        Dlg_1 = new dlgwait_1(this);
        Dlg_1->show();
        Dlg_1->move((wid_x - Dlg_1->width())/2,(wid_y - Dlg_1->height())/2);
        QTimer::singleShot(3000, this, SLOT(slotHidefailed()));  // 这里是一个3秒定时器， 且只执行一次。

        //QMessageBox::warning(this,tr("waring"),tr("your passward is wrong"),QMessageBox::Yes);

    }


}

//背景颜色透明
void Widget::ConvertImageToTransparent(QPixmap qPixmap)
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

//主界面重新出现
void Widget::reshow(){
    this->show();
}

//单击退出
void Widget::on_pushButton_2_clicked()
{
    QApplication* app;
    app->quit();
}

Dialog::Dialog(QDialog *parent)
    :QDialog(parent)
{
    dialog=new QDialog();
    dialog->setWindowTitle(tr("test"));

}

void Dialog::dialogUse()
{

    dialog->show();

}
void Dialog::findClick()
{


}


void Dialog::enableFindButton()
{


}
Dialog::~Dialog()  //Dialog类的析构函数里面不知道写什么，就没写，哈哈......
{


}


//下面这是提示框隐藏
void Widget::slotHideFinishedLabel()
{

    login *login_log = new login();
    login_log->show();//子界面出现
   // login_log->showFullScreen();
    connect(login_log,SIGNAL(send_signal()),this,SLOT(reshow()));//当点击子界面时，调用主界面的reshow()函数
    QTime currTime = QTime::currentTime();
    QTime dieTime = currTime.addMSecs(STOPTIME);       //延时显示 防止闪屏
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    this->hide();//主界面隐藏

}

//登陆失败
void Widget::slotHidefailed()
{
//    Widget *w = new Widget();
//    w->show();
//    QTime currTime = QTime::currentTime();
//    QTime dieTime = currTime.addMSecs(STOPTIME);       //延时显示 防止闪屏
//    while( QTime::currentTime() < dieTime )
//        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
//    this->close();

    Dlg_1->close();
    ui->lineEdit->clear();  //清空姓名nameLine
    ui->lineEdit_2->clear();  //清空密码passwardLine
    ui->lineEdit->setFocus();  //将鼠标重新定位到nameLine

}

void Widget::resetGrid(QWidget *widget,double factorx,double factory)
{
    int widgetX = widget->x();
    int widgetY = widget->y();
    int widgetWid = widget->width();
    int widgetHei = widget->height();
    int nWidgetX = (int)(widgetX*factorx);
    int nWidgetY = (int)(widgetY*factory);
    int nWidgetWid = (int)(widgetWid*factorx);
    int nWidgetHei = (int)(widgetHei*factory);
    widget->setGeometry(nWidgetX,nWidgetY,nWidgetWid,nWidgetHei);
}

