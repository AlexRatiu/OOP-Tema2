//
// Created by Alex on 12/11/2022.
//

#include "Caine.h"
#include "Animale.h"
Caine::Caine(const std::string &specie, const std::string &nume, const std::string &sex, int varsta, int id,
             const std::string _rasa):Animale("caine", nume, sex, varsta, id) {
    rasa=_rasa;

}

Caine::Caine():Animale(){
    rasa="necunoscuta";
}


void Caine::afisare() const{
    std::cout<<"Rasa cainelui este: "<<rasa<<std::endl;
    std::cout<<"Numele cainelui este: "<<nume<<std::endl;
    std::cout<<"Sexul cainelui este: "<<sex<<std::endl;
    std::cout<<"Varsta cainelui este: "<<varsta<<std::endl;
    std::cout<<"Id-ul cainelui este: "<<id<<std::endl;

}

const std::string &Caine::getRasa() const {
    return rasa;

}

void Caine::setRasa(const std::string &rasa) {
    Caine::rasa = rasa;
}

std::ostream &operator<<(std::ostream &os, const Caine &caine) {
    os << static_cast<const Animale &>(caine) << "Rasa cainelui este: " << caine.rasa<<std::endl;
    return os;
}

Caine::~Caine() {
    std::cout<<"Destructor in clasa derivat Caine.";
}

/*void Caine::upc_caine(std::shared_ptr<Animale> tudor) {
    if (tudor->getSpecie()=="caine")
       // *tudor= dynamic_cast<std::shared_ptr<Caine>>(*tudor);

}*/

Caine &Caine::operator=(const Caine &rhs) {
    rasa =rhs.rasa;
    varsta = rhs.varsta;
    nume = rhs.nume;
    sex = rhs.sex; ///pt victor
    id = rhs.id;
    return *this;
}
