//
// Created by Alex on 12/11/2022.
//

#ifndef TEMA2_ADAPOST_H
#define TEMA2_ADAPOST_H
#include <memory>
#include <vector>
#include <ostream>
#include "Animale.h"
#include <string>

class Adapost {
    int nr_animale;
    std::vector<std::shared_ptr<Animale>>lista_animale={};

public:
    Adapost(int nrAnimale);

    Adapost();

    Adapost(const Adapost &rhs);

    void afisare();

    friend std::ostream &operator<<(std::ostream &os, const Adapost &adapost);

    void add_animal(std::shared_ptr<Animale> nou);

    void cauta_animal(std::string specie);

    void sterge_animal(int id);
};


#endif //TEMA2_ADAPOST_H
