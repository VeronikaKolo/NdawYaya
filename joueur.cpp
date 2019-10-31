#include"position.h"
#include"joueur.h"
#include<iostream>
namespace participant{

joueur::joueur(std::string&nom,position*posi,int score,int dureeVie):d_nom{nom},
d_case{posi},d_score{score},d_dureeVie{dureeVie}
{
}

participant::position* joueur::positionJoueur()const{

return d_case;
}

int joueur::score()const{
return d_score;

}
void joueur::deplacerJoueur(const position&casee){
d_case=new position(casee);
}


}
