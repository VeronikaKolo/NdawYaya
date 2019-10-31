#ifndef ROBOT_H
#define ROBOT_H
#include "position.h"
#include "joueur.h"
using namespace participant;
class robot {
public :
    robot(position*p);
    position*positionRobot() const;
    bool detecterJoueur(const joueur&j)const;
    void deplacerRobot(const joueur&j);

private :
    position*d_case;
};

#endif
