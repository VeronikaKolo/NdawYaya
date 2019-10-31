#ifndef POSITION_H
#define POSITION_H
#include<iostream>





namespace participant{

class position{
public:
    position(int col,int lig);
    int numColonne()const;
    int numLigne()const;
    void changerPosition(int col,int lig);
private:
    int d_numColonne;
    int d_numLigne;

};

}












#endif // POSITION_H
