#ifndef MEAL_H
#define MEAL_H

#include <iostream>
#include <vector>
#include <initializer_list>
#include "interfaces/MealCompositeInterface.h"
#include"BaseMealComposite.h"

class Meal: public MealCompositeInterface
{
private:
    std::vector<BaseMealComposite *> MealBox_;
public:
    Meal();
    double getPrice() override;    
    //void addIten(BaseMealComposite* mealIten);
    void addIten(std::initializer_list<BaseMealComposite *> mealIten);
};

#endif