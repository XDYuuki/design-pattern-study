#include <iostream>
#include "Singleton.h"

Singleton *Singleton::instance_= nullptr;;

Singleton::Singleton(int value)
{
    value_ = value;
}

Singleton::~Singleton()
{
}

Singleton *Singleton::getInstance(int value)
{
    if (instance_ == nullptr)
    {
        instance_ = new Singleton(value);
    }
    return instance_;    
}

void Singleton::printTest()
{
    std::cout<<"Testando a Classe"<<std::endl;
}

int Singleton::getValue()
{
    return value_;
}
