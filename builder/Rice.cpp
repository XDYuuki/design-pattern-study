#include "Rice.h"
#include <iostream>

double Rice::getPrice()
{
    return price_;
}

void Rice::printName()
{
    std::cout <<"nome: " << this->name_<< std::endl;
}
