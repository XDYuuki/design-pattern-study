#include <iostream>
//#include "../interfaces/MealCompositeProtocol.h"
#include "interfaces/MealCompositeProtocol.h"

class Rice : public MealCompositeProtocol
{
public:
    Rice(std::string name, double price):MealCompositeProtocol(name, price){}
    double getPrice() override;
    void printName();
};
