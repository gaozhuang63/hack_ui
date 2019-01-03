#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPainter>
#include <QDialog>
#include "message_qemu.h"
#include <QTimer>
#include <QObject>
#include <QMovie>
#include "test.h"
#include <QTime>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();
    void paintEvent(QPaintEvent *);
    void ConvertImageToTransparent(QPixmap qPixmap);


    QMovie *movie;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

public slots:
    void reshow();          //界面重现函数
    void handleTimeout();  //超时处理函数
    void handleTimeout_1();  //超时处理函数
    void handleTimeout_2();  //超时处理函数

signals:
    void send_signal();//这个函数用户向主界面通知关闭的消息

private:
    Ui::login *ui;
    QTimer *Timer;
    message_qemu msg_qemu;
    test test;

};

#endif // LOGIN_H
