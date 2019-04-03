#include "animals.h"

animals::animals( bool sex, int age, int generation){
    sex_ = sex;
    age_ = age;
    generation_ = generation;
}
void moving(point coord_){
    int generation = rand()%4;
    if (generation == 0){
        x--;
    } else
    if (generation == 0){
        x--;
    } else

}

void add_age(int age_);
int get_age(int age_);
int get_sex(bool sex_);
int get_generation(int generation_);
int get_hunger(int hunger_);
int add_hunger(int hunger_);
int lose_hunger(int hunger_);
std::string get_kind(std::string kind_);
