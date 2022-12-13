//
// Created by Alex on 12/11/2022.
//

#ifndef TEMA2_ANIMALE_H
#define TEMA2_ANIMALE_H
#include <string>
#include <ostream>

class Animale {
protected:
    std::string specie;
    std::string nume;
    std::string sex;
    int varsta;
    int id;
public:
    Animale(const std::string &specie, const std::string &nume, const std::string &sex, int varsta, int id);

    Animale();

    Animale(const Animale& rhs);

    const std::string &getSpecie() const;

    const std::string &getNume() const;

    const std::string &getSex() const;

    int getVarsta() const;

    int getId() const;

    void setSpecie(const std::string &specie);

    void setNume(const std::string &nume);

    void setSex(const std::string &sex);

    void setVarsta(int varsta);

    void setId(int id);

    friend std::ostream &operator<<(std::ostream &os, const Animale &animale);

    friend std::istream &operator>>(std::istream &is, Animale &animale);

    Animale& operator=(const Animale &rhs);

    virtual void afisare() const;

    virtual ~Animale();


};


#endif //TEMA2_ANIMALE_H
