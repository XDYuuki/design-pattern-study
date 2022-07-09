#include <iostream>
#include <string>
#include "ConcretePerson.h"

ConcretePerson::ConcretePerson(std::string name, int age):name_(name), age_(age){}
//ConcretePerson::ConcretePerson(float concrete_prototype_field1):concrete_prototype_field1_(concrete_prototype_field1){}


PrototypeInterface * ConcretePerson::Clone() const
{
    return new ConcretePerson(*this);
}

std::string ConcretePerson::GetName()
{
    return this->name_;
}

int ConcretePerson::GetAge()
{
    return this->age_;
}

void ConcretePerson::SetName(std::string name)
{
    this->name_ = name;
}

void ConcretePerson::SetAge(int age)
{
    this->age_ = age;
}