#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>
#include <cstdlib>

enum move {go, fly, swim};
enum meal {meat, gress, all};
enum gender {man, woman};

struct point{int x; int y;};

class animals
{
private:
    move moving_;
    meal eat_;
    gender sex_;
    std::string kind_;
    int age_;
    int max_age_;
    int reprod_age_;
    int reprod_last_;
    int reprod_period_;
    int can_birth_;
    int generation_;
    int hunger_;                   // 100 - max
    point coord_;
 


public:
    animals(gender sex, int age); //искусственное создание
    animals(int mom_gen);         //рождение
    void moving();
    void add_age();
    int get_age();
    std::string get_sex();
    int get_generation();
    int get_hunger();
    void add_hunger();
    void lose_hunger();
    std::string get_kind();
};

#endif // ANIMALS_H
