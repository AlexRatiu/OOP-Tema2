//
// Created by Alex on 12/13/2022.
//

#include "Meniu.h"
#include <iostream>
#include "Adapost.h"
Meniu::Meniu(int _cheie) : cheie(_cheie) {}
Meniu::Meniu() : cheie(-1) {}

void Meniu::prezentare() const {std::cout << "Pentru a adauga un animal apasa tasta 1" << std::endl;
    std::cout << "Pentru a cauta un animal apasa tasta 2" << std::endl;
    std::cout << "Pentru a elimina un animal apasa tasta 3" << std::endl;
    std::cout << "Pentru a afisa toate animalele apasa tasta 4" << std::endl;
    std::cout << "Pentru a iesi din program apasa tasta 0" << std::endl;
}






