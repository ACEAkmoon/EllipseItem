#include "ellipseitem.h"

#include <QPainter>
#include <QStyleOptionGraphicsItem>
//#include <QGraphicsItem>
#include <QQuickPaintedItem>

EllipseItem::EllipseItem(QQuickItem *parent) : QQuickPaintedItem(parent)
{

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


    // Body
    painter->setBrush(Qt::green);
    painter->drawEllipse(-10, -20, 20, 40);

    // Eyes
    painter->setBrush(Qt::white);
    painter->drawEllipse(-10, -17, 8, 8);
    painter->drawEllipse(2, -17, 8, 8);

    // Nose
    painter->setBrush(Qt::black);
    painter->drawEllipse(QRectF(-2, -22, 4, 4));

    // Pupils
    painter->drawEllipse(QRectF(-8.0, -17, 4, 4));
    painter->drawEllipse(QRectF(4.0, -17, 4, 4));

    // Ears
    painter->setBrush(Qt::darkYellow);
    painter->drawEllipse(-17, -12, 16, 16);
    painter->drawEllipse(1, -12, 16, 16);

    // Tail
    QPainterPath path(QPointF(0, 20));
    path.cubicTo(-5, 22, -5, 22, 0, 25);
    path.cubicTo(5, 27, 5, 32, 0, 30);
    path.cubicTo(-5, 32, -5, 42, 0, 35);
    painter->setBrush(Qt::NoBrush);
    painter->drawPath(path);


    painter->restore();
}
