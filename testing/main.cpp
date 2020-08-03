#include <iostream>
#include "dependencies/item.h"

int main()
{ 

    std::cout<< "hello World" << std::endl;
    item gun;
    gun.number = 5;
    std::cout << "Gun Number: " << gun.getNumber() << std::endl;
    return 0;
    
}