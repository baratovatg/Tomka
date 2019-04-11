#include "soil.h"

soil::soil(unsigned int size){
    for (unsigned int i = 0; i < size*size; i++){
        field_.push_back(static_cast<type>(rand()%3));
    }
    size_ = field_.size();
    for (unsigned int i = 0; i < size_/10; i++){
        soil::generate_tree();
    }
}

void soil::generate_tree(){
    unsigned int generate = static_cast <unsigned int >(rand()) % size_;
    if (field_[generate] == tree){
        soil::generate_tree();
    }
    else {
        field_[generate] = tree;
    }
}
void soil::eat_grass(unsigned int i){
    if (field_[i] == adult_grass) {
        field_[i] = eaten_grass;
    }
}

void soil::change_status(unsigned int i){
    if (field_[i] == empty){
        field_[i] = little_grass;
    }
    else if(field_[i] == little_grass){
        field_[i] = adult_grass;
    }
    else if(field_[i] == little_grass){
        field_[i] = adult_grass;
    }
    else if((field_[i] == adult_grass) or (field_[i] == eaten_grass)){
        field_[i] = empty;
    }
}

type soil::get_status(unsigned int i){
    if (field_[i] == empty) {
        return empty;
    }
    else if (field_[i] == little_grass) {
        return little_grass;
    }
    else if (field_[i] == adult_grass) {
        return adult_grass;
    }
    else if (field_[i] == eaten_grass) {
        return eaten_grass;
    }
    else {
        return tree;
    }
}
