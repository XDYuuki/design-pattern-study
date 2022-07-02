#include <iostream>
#include "Singleton/Singleton.h"

//g++ main.cpp Singleton/*.cpp -o main

#define VALOR_INICIAL 5
#define VALOR_CLONADO 7

/**
 * @briefFunções de testes para os Design Patterns
 * 
 */
void testSingleton();

int main(int argc, char const *argv[])
{
    testSingleton();

    return 0;
}

/*----------------------------------------------------------------------*/

void testSingleton()
{
    int returnValue = 0;

    Singleton * ptrSingleton = Singleton::GetInstance(VALOR_INICIAL);
    Singleton * ptrSingletonClone = Singleton::GetInstance(VALOR_CLONADO);

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
