#include <iostream>
#include "interfaces/MealCompositeInterface.h"
class BaseMealComposite: public MealCompositeInterface
{
protected:
    std::string name_;
    double price_;
public:
    BaseMealComposite(std::string name, double price);
    double getPrice() override;
};