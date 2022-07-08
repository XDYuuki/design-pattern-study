#ifndef PREMADE_MEAL_BOX_BUILDER
#define PREMADE_MEAL_BOX_BUILDER

#include "interfaces/MealBuilderProtocol.h"
#include "Meal.h"

class PremadeMealBoxBuilder : public MealBuilderProtocol
{
private:
    Meal * MealBox_;
public:
    PremadeMealBoxBuilder();
    MealBuilderProtocol * MakeMeal() override;
    MealBuilderProtocol * MakeBeverage() override;
    MealBuilderProtocol * MakeDessert() override;
    Meal * GetMeal();
    void Reset();
};

#endif