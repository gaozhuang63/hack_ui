#ifndef FITWINDOW_H
#define FITWINDOW_H
#include <QObject>
#include <QWidget>

///////////////////////////////////////////////
/// \brief The FitWindow class,适用于固定尺寸及内部控件大小位置固定的窗口
///
class FitWindow : public QObject
{
    Q_OBJECT
public:
    FitWindow();
    static void resetUI(QWidget* pWidget);
    static float getScale();
};

#endif // FITWINDOW_H
