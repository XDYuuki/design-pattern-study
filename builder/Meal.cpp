#include <iostream>
#include <vector>
//#include <initializer_list>
#include "Meal.h"
#include "BaseMealComposite.h"

Meal::Meal()
{
    //this->MealBox_ = std::vector<int>{};
    std::cout<<"MEAL CONSTRUCTOR"<<std::endl;
}

double Meal::getPrice()
{
    double TotalPrice = 0;
    for (int item : this->MealBox_)
    //for (BaseMealComposite* item : this->MealBox_)
    {
        //TotalPrice += item->getPrice();
        TotalPrice += item;
    }
    return TotalPrice;

    return(0);
    std::cout<<"MEAL GET PRICE"<<std::endl;
}

//void Meal::addIten(BaseMealComposite * mealIten)
void Meal::addIten(int mealIten)
{
    try
    {
        /* code */
        this->MealBox_.push_back(mealIten);
    }
    catch(const std::exception& e)
    {
        std::cout<<"Error"<<std::endl;
        std::cerr << e.what() << '\n';
    }
    
    std::cout<<"ADD ITEM METHOD"<<std::endl;
}

//void Meal::addIten(/*std::initializer_list<*/BaseMealComposite/*>*/ mealIten) 
// {
//     // for(BaseMealComposite item : mealIten)
//     // {
//         // this->MealBox_.push_back(item);
//     // }
// }