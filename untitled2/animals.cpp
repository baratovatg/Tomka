#include "animals.h"

animals::animals( gender sex, int age){
    sex_ = sex;
    age_ = age;
    generation_ = 1;
}

animals::animals(int mom_gen){
    sex_ = static_cast<gender>(rand()%2);
    age_ = 0;
    generation_ = mom_gen + 1;
}


void animals::moving(){
    int generation = rand() % 4;
    if (generation == 0){
        coord_.x--;
    } else if (generation == 1){
        coord_.y++;
    } else if (generation == 2){
        coord_.x++;
    } else if (generation == 3){
        coord_.y--;
    }
}                                      //рандомное движение по двум направлениям плоскости

void animals::add_age(){
    age_++;
}

int animals::get_age(){
    return age_;
}

std::string animals::get_sex() {
    if (sex_ == 0) {
        return "male";
    } else {
        return "female";
    }
}

int animals::get_generation() {
    return generation_;
}

int animals::get_hunger() {
    return hunger_;
}

void animals::add_hunger() {
    hunger_=100;
}

void animals::lose_hunger() {
    hunger_--;
}

std::string animals::get_kind() {
    return kind_;
}
