#include <iostream>
#include "soil.h"


int main()
{
    unsigned int size;
    std::cin >> size;
    soil ter(size);
    for (unsigned int i = 1; i <= size*size; i++){
        std::cout << ter.get_status(i-1) << ' ';
        if (i % (size) == 0) std::cout << std::endl;
    }
    return 0;
}
