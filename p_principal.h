#ifndef P_PRINCIPAL_H
#define P_PRINCIPAL_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <QPixmap>

class p_principal : public QObject, public QGraphicsItem
{
    int posx=560,posy=155;
    Q_OBJECT
public:
    explicit p_principal(QString direccion, float ancho_, float alto_, float fila_, float columna_, QObject *parent = nullptr);
    ~p_principal();

    QPixmap *img;
    QTimer *timer;

    int velocidad = 9;
    float filas, columnas;
    float ancho, alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void up();
    void down();
    void left();
    void right();
    void cambiarder();
    void cambiarizq();

signals:

public slots:
    void Actualizacion();

};

#endif // P_PRINCIPAL_H
