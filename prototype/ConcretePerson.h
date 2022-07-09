#ifndef CONCRETE_PERSON
#define CONCRETE_PERSON

#include <iostream>
#include <string>
#include "interface/PrototypeInterface.h"

class ConcretePerson : public PrototypeInterface
{
private:
    std::string name_;
    int age_;
    //float concrete_prototype_field1_;
public:
    //ConcretePerson(float concrete_prototype_field1);
    ConcretePerson(std::string name, int age);
    PrototypeInterface * Clone() const override;
    std::string GetName();
    int GetAge();
    void SetName(std::string name);
    void SetAge(int age);
};

#endif
