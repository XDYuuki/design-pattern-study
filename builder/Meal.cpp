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

void Meal::addIten(std::initializer_list<BaseMealComposite *> mealIten)
{
    for(BaseMealComposite * item : mealIten)
    {
        //std::cout<<"Iten extraido da lista: "<<item->name_<<std::endl;
        this->MealBox_.push_back(item);
    }
}

void Meal::GetNotaFiscal()
{
    std::cout<<"Nota Fiscal da sua MealBox"<<std::endl;

    for (BaseMealComposite* item : this->MealBox_)
    {
        std::cout<<"* "<< item->name_<<" : R$ "<<item->price_<<std::endl;
    }

    std::cout<<"Total a pagar: R$ "<<this->getPrice()<<std::endl<<std::endl;
}