#include "customtabstyle.h"

CustomTabStyle::CustomTabStyle()
{

}

QSize CustomTabStyle::sizeFromContents(ContentsType type,
                                       const QStyleOption *option,
                                       const QSize &size,
                                       const QWidget *widget) const
{
    QSize s = QProxyStyle::sizeFromContents(type, option, size, widget);
    if(type == QStyle::CT_TabBarTab)
    {
        s.transpose();

        s.rwidth() = 105;
        s.rheight() = 40;
    }

    return s;
}

void CustomTabStyle::drawControl(ControlElement element, const QStyleOption *option, QPainter *painter, const QWidget *widget) const
{
    if (element == CE_TabBarTabLabel)
    {
        if (const QStyleOptionTab *tab = qstyleoption_cast<const QStyleOptionTab *>(option))
        {
            QTextOption option;
            option.setAlignment(Qt::AlignCenter);
            QPen pen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
            painter->setPen(pen);

            painter->drawText(tab->rect, tab->text, option);


            return;
        }
    }

    QProxyStyle::drawControl(element, option, painter, widget);
}
