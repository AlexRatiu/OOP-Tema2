//
// Created by Alex on 12/11/2022.
//

#ifndef TEMA2_CAINE_H
#define TEMA2_CAINE_H
#include "Animale.h"
#include <iostream>
#include <string>
#include "memory"

class Caine : public Animale{
    std::string rasa;
public:
    Caine(const std::string &specie, const std::string &nume, const std::string &sex, int varsta, int id, const std::string& _rasa);
    void afisare() const override;
    Caine();
/*
    [[nodiscard]] const std::string &getRasa() const;

    void setRasa(const std::string &_rasa);
*/
    friend std::ostream &operator<<(std::ostream &os, const Caine &caine);

    ~Caine()override;

    Caine& operator=(const Caine &rhs);

};


#endif //TEMA2_CAINE_H
