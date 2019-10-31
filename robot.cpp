#include "robot.h"

robot::robot( participant::position*p):d_case{p}{};

participant::position* robot::positionRobot() const
{
    return d_case;
}
//detecte si le joueur est present autour de lui
bool robot::detecterJoueur( const joueur&j) const
{
    if ((j.d_case.d_numColonne==d_case.d_numColonne && j.d_case.d_numLigne==(d_case.d_numLigne+1))||
        (j.d_case.d_numColonne==d_case.d_numColonne && j.d_case.d_numLigne==(d_case.d_numLigne+-1))||
         (j.d_case.d_numColonne==(d_case.d_numColonne+1) && j.d_case.d_numLigne==d_case.d_numLigne)||
            (j.d_case.d_numColonne==(d_case.d_numColonne+1) && j.d_case.d_numLigne==d_case.d_numLigne))
                return true;
        return false;
}
void robot::deplacerRobotAuHasard()
{
    d_case=new postion (caseHasard);
}
// si le robot a detecté un joueur il se deplace sur sa case
//sinon il se deplace sur  une case au hasard se trouvant à coté
void robot::deplacerRobot(const  joueur&j)
{
    if (detecterJoueur(j))
    {
        d_case=new position(j.positionJoueur);
    }
    else
    {
        deplacerRobotAuHasard();
    }
}
