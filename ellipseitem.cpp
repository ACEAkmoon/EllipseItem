#include "ellipseitem.h"

#include <QPainter>
#include <QStyleOptionGraphicsItem>
//#include <QGraphicsItem>
#include <QQuickPaintedItem>

EllipseItem::EllipseItem(QQuickItem *parent) : QQuickPaintedItem(parent)
{
    //setFlag(QGraphicsItem::ItemHasNoContents, false);
}

/*void EllipseItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *)
{
    painter->save();
    painter->setPen(Qt::red);
    painter->drawEllipse(option->rect);

    painter->restore();
}*/

void EllipseItem::paint(QPainter *painter)
{
    painter->save();
    const qreal halfPenWidth = qMax(painter->pen().width()/2.0, 1.0);
    QRectF rect = boundingRect();
    rect.adjust(halfPenWidth, halfPenWidth, -halfPenWidth, - halfPenWidth);
    painter->setPen(Qt::red);
    painter->drawEllipse(rect);
    painter->restore();
}
