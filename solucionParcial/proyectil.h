#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>
#include <QObject>
#include <QTimer>
#include <QGraphicsRectItem>
#include "movimientos.h"
#include <QPainter>
#include <QVector>
#include <QDebug>
#include <persistencia.h>
#include <proyectilEnemigo.h>


class Proyectil : public QObject , public QGraphicsPixmapItem , public Movimientos
{
    Q_OBJECT
public:
    Proyectil(short int velocidad_instantanea, short int angulo , float posicion_x , float posicion_y , bool reverse = false);
    ~Proyectil();
protected:
    QTimer *eventController;
    QVector <Proyectil *> im;
    short int min=0;

protected slots:
    void actions();

    // QGraphicsItem interface
public:
    //QRectF boundingRect() const;
    //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // PROYECTIL_H
