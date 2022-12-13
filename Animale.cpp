//
// Created by Alex on 12/11/2022.
//

#include "Animale.h"
#include <iostream>
#include <string>
Animale::Animale(const std::string &specie, const std::string &nume, const std::string &sex, int varsta, int id) : specie(specie),
                                                                                                    nume(nume),
                                                                                                    sex(sex),
                                                                                                    varsta(varsta),
                                                                                                    id(id) {}

Animale::Animale() {}

Animale::Animale(const Animale &rhs) {
    specie=rhs.specie;
    nume=rhs.nume;
    sex=rhs.sex;
    varsta=rhs.varsta;
    id=rhs.id;
}

const std::string &Animale::getSpecie() const {
    return specie;
}

const std::string &Animale::getNume() const {
    return nume;
}

const std::string &Animale::getSex() const {
    return sex;
}

int Animale::getVarsta() const {
    return varsta;
}

int Animale::getId() const {
    return id;
}

void Animale::setSpecie(const std::string &specie) {
    Animale::specie = specie;
}

void Animale::setNume(const std::string &nume) {
    Animale::nume = nume;
}

void Animale::setSex(const std::string &sex) {
    Animale::sex = sex;
}

void Animale::setVarsta(int varsta) {
    Animale::varsta = varsta;
}

void Animale::setId(int id) {
    Animale::id = id;
}

std::ostream &operator<<(std::ostream &os, const Animale &animale) {
    os << "Specia animalului este: " << animale.specie <<std::endl;
    os << "Numele animalului este: " << animale.nume <<std::endl;
    os << "Sexul animalului este: " << animale.sex <<std::endl;
    os << "Varsta animalului este: "<< animale.varsta <<std::endl;
    os << "Id-ul animalului este: " << animale.id<<std::endl;;
    return os;
}

std::istream &operator>>(std::istream &is, Animale &animale) {
    std::cout<<"Specia animalului este: ";
    is>>animale.specie;
    std::cout<<"Numele animalului este: ";
    is>>animale.nume;
    std::cout<<"Sexul animalului este: ";
    is>>animale.sex;
    std::cout<<"Varsta animalului este: ";
    is>>animale.varsta;
    std::cout<<"Id-ul animalului este: ";
    is>>animale.id;
    return is;
}

Animale &Animale::operator=(const Animale &rhs) {
    specie=rhs.specie;
    nume=rhs.nume;
    sex=rhs.sex;
    varsta=rhs.varsta;
    id=rhs.id;
    return *this;
}

void Animale::afisare() const {
    std::cout<<"Specia animalului este: "<<specie<<std::endl;
    std::cout<<"Numele animalului este: "<<nume<<std::endl;
    std::cout<<"Sexul animalului este: "<<sex<<std::endl;
    std::cout<<"Varsta animalului este: "<<varsta<<std::endl;
    std::cout<<"Id-ul animalului este: "<<id<<std::endl;
}

Animale::~Animale() {

}




