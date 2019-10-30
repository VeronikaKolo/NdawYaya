#include "fenetre.h"

fenetre::fenetre(terrain&t):d_win{this}
{
    vueCreer(t);
}



void fenetre::vueCreer(terrain&t){

    setWindowTitle("HI ROBOTS");

    //Terrain
    d_grille = new grille{t};


    //Titre
    auto label = new QLabel{"HI ROBOTS"};
    label->setFixedSize(maximumWidth(),60);
    label->setStyleSheet("QLabel { background-color : #2F2F2F; color : #2B71D9; font-size:20px; }");
    label->setAlignment(Qt::AlignCenter);


    //Principale
    auto layout = new QVBoxLayout{};
    layout->addWidget(label,Qt::AlignCenter);
    layout->addWidget(d_grille);



    auto Wid = new QWidget;
    Wid->setLayout(layout);

    setCentralWidget(Wid);

}
