#include <iostream>
#include <vector>
#include "main.h"
#include "singleton/Singleton.h"
#include "builder/Rice.h"
#include "builder/Beans.h"
#include "builder/Meat.h"
#include "builder/Beverage.h"
#include "builder/Dessert.h"
#include "builder/Meal.h"

//COMMAND TO COMPILE THE CODE
//g++ -g main.cpp singleton/*.cpp builder/*.cpp -static -o main
//g++ -fdiagnostics-color=always -g main.cpp singleton/*.cpp builder/*.cpp -static -o main.exe


/*----------------------------------------------------------------------*/
int main(int argc, char const *argv[])
{
    //testSingleton();

    Rice * rice = new Rice("Arrozin", 50);
    Beans * beans = new Beans("Feijaozin", 10);
    Meat * meat = new Meat("Carninha", 60);
    Beverage * beverage = new Beverage("Bebidinha", 25.5);
    Dessert * dessert = new Dessert("sobremesinha", 15);

    Meal * meal = new Meal();

    meal->addIten({dessert, beans, rice, beverage, meat});
    
    std::cout <<"Preco da refeicao: " << meal->getPrice()<< std::endl;

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
