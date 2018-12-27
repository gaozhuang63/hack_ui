#ifndef MESSAGE_QEMU_H
#define MESSAGE_QEMU_H

#include <QWidget>
#include <QPainter>
#include <QDialog>
#include "customtabstyle.h"


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



private slots:
    void on_pushButton_clicked();

signals:
    void send_signal();//这个函数用户向主界面通知关闭的消息

private:
    Ui::message_qemu *ui;
};

#endif // MESSAGE_QEMU_H
