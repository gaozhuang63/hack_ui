#ifndef MESSAGE_QEMU_H
#define MESSAGE_QEMU_H

#include <QWidget>
#include <QPainter>
#include <QDialog>
#include "customtabstyle.h"
#include "loading.h"
#include "test.h"


namespace Ui {
class message_qemu;
}

class message_qemu : public QWidget
{
    Q_OBJECT

public:
    explicit message_qemu(QWidget *parent = 0 );
    ~message_qemu();
    void paintEvent(QPaintEvent *);

    QMovie *movie;
    QMovie *movie_1;
    QMovie *movie_2;
    QMovie *movie_3;
    int msg_x;
    int msg_y;

    loading *load;
    test *t1;


public slots:
    void load_info();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void send_signal();//这个函数用户向主界面通知关闭的消息

private:
    Ui::message_qemu *ui;
};

#endif // MESSAGE_QEMU_H
