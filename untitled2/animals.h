
#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>

class animals
{
private:
    const unsigned char go = 0x01;
    const unsigned char fly = 0x02;
    const unsigned char swim = 0x03;
    std::string kind;
    bool sex;
    int age;
    int reprod_age;
    int reprod_period;
    int generation;

public:
    animals();


};

#endif // ANIMALS_H
