#ifndef BASE_MEAL_COMPOSITE
#define BASE_MEAL_COMPOSITE

#include <iostream>
#include "interfaces/MealCompositeInterface.h"

class BaseMealComposite: public MealCompositeInterface
{
protected:
public:
    std::string name_;
    double price_;
    BaseMealComposite(std::string name, double price);
    double getPrice() override;
};

#endif