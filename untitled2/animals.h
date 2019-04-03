#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>

class animals
{
private:
    const unsigned char go = 0x01;
    const unsigned char fly = 0x02;
    const unsigned char swim = 0x03;
    const unsigned char meat = 0x01;
    const unsigned char gress = 0x02;
    std::string kind;
    bool sex;
    int age;
    int max_age;
    int reprod_age;
    int reprod_period;
    int generation;
    int hunger;

public:
    animals();
    void moving();
    void change_hunger();
    void change_age();
    bool birth();
    std::string get_kind();
    int get_age();
    int get_sex();
    int get_hunger();
};

#endif // ANIMALS_H
