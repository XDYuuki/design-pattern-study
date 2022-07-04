#include <iostream>
class MealCompositeProtocol
{
protected:
    std::string name_;
    double price_;
public:
    MealCompositeProtocol(std::string name, double price)
    {
        this->name_ = name;
        this->price_ = price;
    }
    virtual double getPrice() = 0;
};