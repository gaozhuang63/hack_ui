#include "test.h"
#include "ui_test.h"
#include "title_bar.h"
#include <QMovie>

test::test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::test)
{
    TitleBar *pTitleBar = new TitleBar(this);
    installEventFilter(pTitleBar);
    //自定义标题栏
    ui->setupUi(this);

    QPalette pal(palette());
    pal.setColor(QPalette::Background, QColor(50, 50, 50));
    setAutoFillBackground(true);
    setPalette(pal);

    ui->verticalLayout->addWidget(pTitleBar);
    ui->verticalLayout->setSpacing(0);
    ui->verticalLayout->setContentsMargins(0, 0, 0, 0);
   // ui->verticalLayout->setDirection(QBoxLayout::BottomToTop);//自下而上


    QMovie *movie= new QMovie(":/new/unit/pic/unit/number.gif");
    ui->label->setMovie(movie);
    movie->start();


}

test::~test()
{
    delete ui;
}
