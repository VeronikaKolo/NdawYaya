#include<iostream>
#include"position.h"
namespace participant{

position::position(int col,int lig):d_numColonne{col},d_numLigne{lig}
{
}
int position::numColonne()const{
return d_numColonne;
}
position::numLigne()const{
return d_numLigne;
}
void position::changerPosition(int col,int lig){
d_numColonne=col;
d_numLigne=lig;

}









}
