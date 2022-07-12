#ifndef CONCRETE_PERSON
#define CONCRETE_PERSON

#include <iostream>
#include <string>
#include "PersonPrototype.h"


class ConcretePerson : public PersonPrototype
{
public:
    //ConcretePerson(float concrete_prototype_field1);
    ConcretePerson(std::string name, int age, EFavoriteColor favoriteColor):PersonPrototype(name, age, favoriteColor){}
    PersonPrototype * Clone() const override;
};

#endif
