#ifndef ELLIPSEITEM_H
#define ELLIPSEITEM_H

#include <QQuickPaintedItem>
#include <QGraphicsItem>

class EllipseItem : public QQuickPaintedItem
{
    Q_OBJECT
public:
    EllipseItem(QQuickItem *parent = Q_NULLPTR);

    void paint(QPainter *painter);
    //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *wdget);

signals:

public slots:
};


#endif // ELLIPSEITEM_H
