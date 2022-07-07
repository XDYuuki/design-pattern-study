#include <iostream>
#include <vector>
#include <initializer_list>
#include "Meal.h"
#include "BaseMealComposite.h"

Meal::Meal()
{
}

double Meal::getPrice()
{
     double TotalPrice = 0;
    for (BaseMealComposite* item : this->MealBox_)
    {
        TotalPrice += item->getPrice();
    }
    return TotalPrice;
}

// void Meal::addIten(BaseMealComposite * mealIten)
// {

//     this->MealBox_.push_back(mealIten);
// }

void Meal::addIten(std::initializer_list<BaseMealComposite *> mealIten)
{
    for(BaseMealComposite * item : mealIten)
    {
        std::cout<<"Iten extraido da lista: "<<item->name_<<std::endl;
        this->MealBox_.push_back(item);
    }
}