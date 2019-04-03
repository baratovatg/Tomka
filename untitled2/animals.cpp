#include "animals.h"

animals::animals( bool sex, int age, int generation){
    sex = set_sex();
    age = set_age();
    generation = set_generation();
}
void moving();
void change_hunger();
void change_age();
bool birth();
std::string get_kind();
int get_age();
int set_age();
int get_sex();
int set_sex();
int get_generation();
int set_generation();
int get_hunger();
int set_hunger();
