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
    int varsta{};
    int id{};
public:
    Animale(std::string specie, std::string nume, std::string sex, int varsta, int id);

    Animale();

    Animale(const Animale& rhs);

    [[nodiscard]] const std::string &getSpecie() const;

    [[nodiscard]] const std::string &getNume() const;

    [[nodiscard]] const std::string &getSex() const;

    [[nodiscard]] int getVarsta() const;

    [[nodiscard]] int getId() const;

    void setSpecie(const std::string &_specie);

    void setNume(const std::string &_nume);

    void setSex(const std::string &_sex);

    void setVarsta(int _varsta);

    void setId(int _id);

    friend std::ostream &operator<<(std::ostream &os, const Animale &animale);

    friend std::istream &operator>>(std::istream &is, Animale &animale);

    Animale& operator=(const Animale &rhs);

    virtual void afisare() const;

    virtual ~Animale();


};


#endif //TEMA2_ANIMALE_H
