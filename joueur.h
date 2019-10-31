#ifndef JOUEUR_H
#define JOUEUR
#include<iostream>
#include"position.h"

namespace participant{

class joueur{
    joueur(std::string&nom,position*posi,int score,int dureeVie);
    participant::position* positionJoueur()const;
    int score()const;
    void deplacerJoueur(const position&casee);

private:
    std::string d_nom;
    position*d_case;//la case ou se trouve le joueur
    int d_score;
    int d_dureeVie;










};
}
























#endif // JOUEUR_H
