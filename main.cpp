#include <iostream>
#include "main.h"
#include "singleton/Singleton.h"
#include "builder/Rice.h"
#include "builder/Beans.h"
#include "builder/Meat.h"
#include "builder/Beverage.h"
#include "builder/Dessert.h"
#include "builder/Meal.h"
//#include "builder/meal-itens/Rice.h" --- Resolver esse erro

//COMMAND TO COMPILE THE CODE
//g++ main.cpp singleton/*.cpp builder/*.cpp -o main
//g++ *.cpp -o main

/*----------------------------------------------------------------------*/
int main(int argc, char const *argv[])
{
    //testSingleton();

    Rice * rice = new Rice("Arrozin", 50);
    Beans * beans = new Beans("Feijão", 10);
    Meat * meat = new Meat("Carne", 60);
    Beverage * beverage = new Beverage("Bebida", 25.5);
    Dessert * dessert = new Dessert("sobremesa", 15);

    Meal * meal = new Meal();

    meal->addIten(beans);
    
    std::cout <<"Preco do arroz: " << rice->getPrice()<< std::endl;

    delete rice;
    delete beans;
    delete meat;
    delete beverage;
    delete dessert;
    delete meal;

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
