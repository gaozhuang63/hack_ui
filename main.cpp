#include "widget.h"
#include <QApplication>
#include "title_bar.h"
#include <QHBoxLayout>
#include <QDesktopWidget>
#include "widget.h"
#include <QSize>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget *w = new Widget();
    Widget w;
   // w.setWindowOpacity(1);
   // w.setWindowFlags(Qt::FramelessWindowHint);
   // w.setAttribute(Qt::WA_TranslucentBackground);
    w.show();
    //w.move ((QApplication::desktop()->width() - w.width())/2,(QApplication::desktop()->height() - w.height())/2); 屏幕居中


    return a.exec();
}

