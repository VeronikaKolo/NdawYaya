#include "grille.h"
#include <QApplication>
#include "fenetre.h"

int main(int argc, char *argv[])
{
    //joueur j;
    terrain t(12,2,2,5,5);

    QApplication app{argc,argv};
    fenetre f(t);
    f.show();
    app.exec();
}
