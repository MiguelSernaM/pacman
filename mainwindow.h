#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>
#include <stdlib.h>
#include <QTextStream>
#include "p_principal.h"
#include "muros.h"
#include "moneda.h"
#include "health.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void iniciar();
    QList<moneda *> monedas;
    QList<moneda *> monedas2;
    QList<moneda *> monedas3;

private:
    Ui::MainWindow *ui;
    QTimer *timer2;
    health *viditas;
    int valor;
    int mundo= 1;
    int mostrar=0;
    p_principal *personaje;
    QGraphicsScene *scene;
    QGraphicsScene *scene2;
    QGraphicsScene *scene3;
    void keyPressEvent(QKeyEvent *evento);
    muros *pared1;
    muros *pared2;
    muros *pared3;
    muros *pared4;
    muros *pared5;
    muros *pared6;
    muros *pared7;
    muros *pared8;
    muros *pared9;
    muros *pared10;
    muros *pared11;
    muros *pared12;
    muros *pared13;
    muros *pared14;
    muros *pared15;
    muros *pared16;
    muros *pared17;
    muros *pared18;
    muros *pared19;
    muros *pared20;
    muros *pared21;
    muros *pared22;
    muros *pared23;
    muros *pared24;
    muros *pared25;
    muros *pared26;
    muros *pared27;
    muros *pared28;
    muros *pared29;
    muros *pared30;
    muros *pared31;
    muros *pared32;
    muros *pared33;
    muros *pared34;
    muros *pared35;
    muros *pared36;
    muros *pared37;
    muros *pared38;
    muros *pared39;
    muros *pared40;
    muros *pared41;
    muros *pared42;
    muros *pared43;
    QList<moneda *> eliminarMonedas(QList<moneda *> monedas,int pos);
public slots:

private slots:

};
#endif // MAINWINDOW_H
