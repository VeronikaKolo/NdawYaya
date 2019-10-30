#ifndef FENETRE_H
#define FENETRE_H

#include <QWidget>
#include <QMainWindow>
#include <QGridLayout>
#include <QObject>
#include "grille.h"


class fenetre : public QMainWindow
{
    Q_OBJECT
public:
    fenetre(terrain&t);
private:
    QMainWindow*d_win;
    grille*d_grille;
    void vueCreer(terrain&t);
};

#endif // FENETRE_H
