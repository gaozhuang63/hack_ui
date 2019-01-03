#ifndef DLGWAIT_1_H
#define DLGWAIT_1_H

#include <QDialog>

namespace Ui {
class dlgwait_1;
}

class dlgwait_1 : public QDialog
{
    Q_OBJECT

public:
    explicit dlgwait_1(QWidget *parent = nullptr);
    ~dlgwait_1();

    QMovie *movie;

private:
    Ui::dlgwait_1 *ui;
};

#endif // DLGWAIT_1_H
