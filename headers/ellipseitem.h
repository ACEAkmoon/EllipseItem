#ifndef ELLIPSEITEM_H
#define ELLIPSEITEM_H

#include <QQuickPaintedItem>
#include <QGraphicsItem>

class EllipseItem : public QQuickPaintedItem
{
    Q_OBJECT

    QColor m_color;

    Q_PROPERTY(QColor color
               MEMBER m_color
               READ color
               WRITE setColor
               NOTIFY colorChanged)

public:
    EllipseItem(QQuickItem *parent = Q_NULLPTR);

    void paint(QPainter *painter);
    //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *wdget);
    void paintMouse(QPainter *painter);

    const QColor& color() const;
    void setColor(const QColor);

signals:

    void colorChanged();

public slots:
};


#endif // ELLIPSEITEM_H
