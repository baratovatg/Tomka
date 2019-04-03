#include "animals.h"

animals::animals( bool sex, int age, int generation){
    sex_ = sex;
    age_ = age;
    generation_ = generation;
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
}

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
        return "women";
    }
}

int animals::get_generation() {
    return generation_;
}

int animals::get_hunger() {
    return hunger_;
}

void animals::add_hunger(int meal) {
    hunger_+=meal;
}

void animals::lose_hunger() {
    hunger_--;
}

std::string animals::get_kind() {
    return kind_;
}
