#ifndef SOIL_H
#define SOIL_H
#include <string>
#include <vector>
enum type {empty, little_grass, adult_grass, eaten_grass, tree};
class soil
{
private:
    std::vector <type> field_;
    void generate_tree();
    unsigned int size_ = 0;
public:
    soil(unsigned int size);
    void eat_grass(unsigned int i);
    void change_status(unsigned int i);
    std::string get_status(unsigned int i);
};

#endif // SOIL_H
