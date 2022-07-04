#include <iostream>
#include "BaseMealComposite.h"

class Rice : public BaseMealComposite
{
public:
    Rice(std::string name, double price):BaseMealComposite(name, price){}
};
