//
// Created by Alex on 12/13/2022.
//

#ifndef TEMA2_MENIU_H
#define TEMA2_MENIU_H
#include "Adapost.h"

class Meniu {
    int cheie;
public:
    Meniu(int _cheie);
    Meniu();
    int getCheie() const;
    void setCheie(int _cheie);
    void prezentare() const;

};


#endif //TEMA2_MENIU_H
