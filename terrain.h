#ifndef TERRAIN_H
#define TERRAIN_H

#include "joueur.h"
#include <iostream>
#include <fstream>
#include <vector>


class terrain
{
    public:
    terrain();
     terrain(int nbdebris, int nbrobotfirstG, int nbrobotsecondG, int taille1, int taille2);
     int taille1()const;
     int taille2()const;
     void lireTerrain(const std::string&nomFichier);
     void sauverTerrain(const std::string&nomFichier);
     void changerTailleGrille(int taille1, int taille2);

    private :
     int d_nbdebris;
    // joueur d_joueur;
     int d_nbrobotFirstG;
     int d_nbrobotSecondG;
     int d_taille1;
     int d_taille2;
   //  std::vector<std::vector<int> >d_grille; // 0 = vide, 1 = joueur, 2 = robot, 3 = débris, 4 = colision




};

#endif // TERRAIN_H
