#include "PremadeMealBoxBuilder.h"
#include "Meal.h"
#include "Rice.h"
#include "Beans.h"
#include "Meat.h"
#include "Beverage.h"
#include "Dessert.h"

PremadeMealBoxBuilder::PremadeMealBoxBuilder()
{
    this->MealBox_ = new Meal();
}

MealBuilderProtocol * PremadeMealBoxBuilder::MakeMeal()
{    
    Rice * rice = new Rice("Arrozin", 50);
    Beans * beans = new Beans("Feijaozin", 10);
    Meat * meat = new Meat("Carninha", 60);
    this->MealBox_->addIten({rice, beans, meat});

    return this;
}

MealBuilderProtocol * PremadeMealBoxBuilder::MakeBeverage()
{    
    Beverage * beverage = new Beverage("Bebidinha", 25.5);
    this->MealBox_->addIten({beverage});

    return this;
}

MealBuilderProtocol * PremadeMealBoxBuilder::MakeDessert()
{  
    Dessert * dessert = new Dessert("sobremesinha", 15);
    this->MealBox_->addIten({dessert});

    return this;
}

Meal * PremadeMealBoxBuilder::GetMeal()
{
    return this->MealBox_;
}

void PremadeMealBoxBuilder::Reset()
{
    delete this->MealBox_;
    this->MealBox_ = new Meal();
}