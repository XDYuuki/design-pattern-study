#include <iostream>
#include <vector>
#include <initializer_list>
#include "interfaces/MealCompositeInterface.h"
#include"BaseMealComposite.h"

class Meal: public MealCompositeInterface
{
private:
    std::vector<BaseMealComposite*> MealBox_;
public:
    double getPrice() override;
    //void addIten(/*std::initializer_list<*/BaseMealComposite/*>*/ mealIten);
    void Meal::addIten(BaseMealComposite* mealIten);
};

double Meal::getPrice()
{
    double TotalPrice = 0;
    for (BaseMealComposite* item : this->MealBox_)
    {
        TotalPrice += item->getPrice();
    }
    return TotalPrice;
}

//void Meal::addIten(/*std::initializer_list<*/BaseMealComposite/*>*/ mealIten) 
void Meal::addIten(BaseMealComposite* mealIten) 
{
    // for(BaseMealComposite item : mealIten)
    // {
        // this->MealBox_.push_back(item);
    // }
    this->MealBox_.push_back(mealIten);
}
