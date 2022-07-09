#include <iostream>
#include <vector>
#include "main.h"
#include "singleton/Singleton.h"
#include "builder/PremadeMealBoxBuilder.h"
#include "builder/Meal.h"
#include "prototype/ConcretePerson.h"

//COMMAND TO COMPILE THE CODE
//g++ -g main.cpp singleton/*.cpp builder/*.cpp -static -o main
//g++ -fdiagnostics-color=always -g main.cpp singleton/*.cpp builder/*.cpp prototype/*.cpp -static -o main.exe


/*----------------------------------------------------------------------*/
int main(int argc, char const *argv[])
{
    // TestSingleton();
    // TestBuilder();
    TestPrototype();

    return 0;
}


/*----------------------------------------------------------------------*/
void TestSingleton()
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

/*----------------------------------------------------------------------*/
void TestBuilder()
{
    PremadeMealBoxBuilder * CustonMealBox01 = new PremadeMealBoxBuilder();
    Meal * MealBox;

    CustonMealBox01->MakeMeal()->MakeDessert()->MakeBeverage();
    MealBox = CustonMealBox01->GetMeal();    

    MealBox->GetNotaFiscal();

    CustonMealBox01->Reset();
    CustonMealBox01->MakeMeal()->MakeBeverage();

     MealBox->GetNotaFiscal();
}

/*----------------------------------------------------------------------*/
void TestPrototype()
{
    ConcretePerson * Person1 = new ConcretePerson("Gabriel Rocha", 30);
    //ConcretePerson * Person2 = Person1->Clone();

    std::cout<<"Person1 name: "<<Person1->GetName()<<" Age: "<<Person1->GetAge()<<std::endl;
    //std::cout<<"Person2 name: "<<Person2->GetName()<<" Age: "<<Person2->GetAge()<<std::endl;

    delete Person1;
}
