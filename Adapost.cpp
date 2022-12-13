//
// Created by Alex on 12/11/2022.
//

#include "Adapost.h"
#include <iostream>
#include <cstring>

Adapost::Adapost(int nrAnimale) : nr_animale(nrAnimale) {}

Adapost::Adapost():nr_animale(0) {}

Adapost::Adapost(const Adapost &rhs) {
    nr_animale=rhs.nr_animale;
}

void Adapost::afisare() {
    for(int i=0; i<nr_animale; i++){
        std::cout<<*lista_animale[i]<<std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Adapost &adapost) {
    os << "Numarul de animale este: " << adapost.nr_animale<<std::endl;
    return os;
}

void Adapost::add_animal(const std::shared_ptr<Animale>& nou) {
    lista_animale.push_back(nou);
    nr_animale++;
}

void Adapost::cauta_animal(const std::string& specie) {
     for(int i=0; i<nr_animale; i++) {
         //std::cout<<specie<<std::endl<<lista_animale[i]->getSpecie()<<std::endl;
         if (strcmp(lista_animale[i]->getSpecie().c_str(), specie.c_str()) == 0){
             lista_animale[i]->afisare();
             }
     }
}

void Adapost::sterge_animal(int id) {
    lista_animale.erase(lista_animale.begin()+id);
    nr_animale--;
}




