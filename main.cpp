#include <iostream>
#include "main.h"
#include "Singleton/Singleton.h"

//COMMAND TO COMPILE THE CODE
//g++ main.cpp Singleton/*.cpp -o main

/*----------------------------------------------------------------------*/
int main(int argc, char const *argv[])
{
    testSingleton();

    return 0;
}

/*----------------------------------------------------------------------*/
void testSingleton()
{
    int returnValue = 0;

    Singleton * ptrSingleton = Singleton::getInstance(VALOR_INICIAL);
    Singleton * ptrSingletonClone = Singleton::getInstance(VALOR_CLONADO);

    ptrSingleton->printTest();
    ptrSingletonClone->printTest();

    returnValue = ptrSingleton->getValue();
    std::cout<<"Valor retornado do ptr inicial: "<<returnValue<<"\n";

    returnValue = ptrSingletonClone->getValue();
    std::cout<<"Valor retornado do ptr clonado: "<<returnValue<<"\n";

    if(ptrSingleton == ptrSingletonClone)
    {
        std::cout<<"Mesmo endereco de memoria"<<"\n";
    }

}
