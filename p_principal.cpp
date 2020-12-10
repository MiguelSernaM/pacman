#include "p_principal.h"

p_principal::p_principal(QString direccion, float ancho_, float alto_, float fila_, float columna_, QObject *parent) : QObject(parent)
{
    filas = fila_;
    columnas = columna_;
    ancho = ancho_;
    alto = alto_;
    img = new QPixmap(direccion);
    timer = new QTimer;
    timer->start(100);
    connect(timer, &QTimer::timeout, this, &p_principal::Actualizacion);
}

void p_principal::Actualizacion()
{
    columnas += ancho;
    if (columnas >= (ancho*3)){
        columnas = 0;
    }
    this->update(ancho/2, alto/2, ancho, alto);
}

QRectF p_principal::boundingRect() const
{
    return QRectF(ancho/2, alto/2, ancho, alto);
}

void p_principal::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(ancho/2, alto/2, *img, columnas, filas, ancho, alto);
}

void p_principal::up()
{
    posy -= 1*velocidad;
    setPos(posx,posy);
}

void p_principal::down()
{
    posy += 1*velocidad;
    setPos(posx,posy);
}

void p_principal::left()
{
    posx -= 1*velocidad;
    setPos(posx,posy);
}

void p_principal::right()
{
    posx += 1*velocidad;
    setPos(posx,posy);
}

void p_principal::cambiarder()
{
    posx =-235;
    posy = 155;
    setPos(posx,posy);
}

void p_principal ::cambiarizq()
{
    posx=560;
    posy=155;
    setPos(posx,posy);
}

p_principal::~p_principal()
{
    delete img;
    delete timer;
}
