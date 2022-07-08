#ifndef MEAL_BUILDER_PROTOCOL
#define MEAL_BUILDER_PROTOCOL

class MealBuilderProtocol
{
public:
    virtual MealBuilderProtocol * MakeMeal() = 0;
    virtual MealBuilderProtocol * MakeBeverage() = 0;
    virtual MealBuilderProtocol * MakeDessert() = 0;
};

#endif