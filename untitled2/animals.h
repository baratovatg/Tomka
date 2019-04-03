#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>
#include <main.cpp>
a = 0;
class animals
{
private:
    const unsigned char go_ = 0x01;
    const unsigned char fly_ = 0x02;
    const unsigned char swim_ = 0x03;
    const unsigned char meat_ = 0x01;
    const unsigned char gress_ = 0x02;
    std::string kind_;
    bool sex_; //0 - men, 1 - women
    int age_;
    int max_age_;
    int reprod_age_;
    int reprod_period_;
    int generation_;
    int hunger_;

public:
    animals( bool sex, int age, int generation);
    void moving();
    void change_hunger();
    void change_age();
    bool birth();
    std::string get_kind();
    int get_age();
    int get_sex();
    int get_generation();
    int get_hunger();
    int add_hunger();
    int lose_hunger();
};

#endif // ANIMALS_H
