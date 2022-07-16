#include <iostream>
#include <string.h>
#include <vector>
#include <memory>
#include "main.h"
#include "singleton/Singleton.h"
#include "builder/PremadeMealBoxBuilder.h"
#include "builder/Meal.h"
#include "prototype/ConcretePerson.h"
#include "prototype/PersonPrototype.h"
#include "factory/ConcreteVehicleFactoryPeople.h"
#include "factory/ConcreteVehicleFactoryDelivery.h"

//COMMAND TO COMPILE THE CODE
//g++ -g main.cpp singleton/*.cpp builder/*.cpp -static -o main
//g++ -fdiagnostics-color=always -g main.cpp singleton/*.cpp builder/*.cpp prototype/*.cpp factory/*.cpp -static -o main.exe


/*----------------------------------------------------------------------*/
int main(int argc, char const *argv[])
{
    // TestSingleton();
    // TestBuilder();
    // TestPrototype();
    TestFactoryMethod();

    return 0;
}



/*----------------------------------------------------------------------*/
void TestFactoryMethod()
{
    ConcreteVehicleFactoryPeople * CarPoolFactory = new ConcreteVehicleFactoryPeople();
    ConcreteVehicleFactoryDelivery * DeliveryFactory = new ConcreteVehicleFactoryDelivery();

    auto * Car01 = CarPoolFactory->FatoryMethod("Albus Dumbledore", CAR_POOL_PREMIUM);
    Car01->PickUp("Dobby");
    Car01->Stop();

    auto * Delivery01 = DeliveryFactory->FatoryMethod("Ronald Mc Donald", DELIVERY_MOTOCYCLE);
    Delivery01->PickUp("Mr King of the Burger");
    Delivery01->Stop();

    delete CarPoolFactory;
    delete DeliveryFactory;
    delete Car01;
    delete Delivery01;
}

/*----------------------------------------------------------------------*/
void TestPrototype()
{
    const ConcretePerson * PrototypePerson = new ConcretePerson("Teste", 0, BLANK);
    PersonPrototype * Person1 = PrototypePerson->Clone();
    PersonPrototype * Person2 = PrototypePerson->Clone();

    std::cout<<"Person1 name before change: "<<Person1->GetName()<<" Age: "<<Person1->GetAge()<<std::endl;
    std::cout<<"Person2 name before change: "<<Person2->GetName()<<" Age: "<<Person2->GetAge()<<std::endl;

    Person1->SetName("Fulano de Tal");
    Person1->SetAge(30);
    Person1->SetFavoriteColor(PURPLE);

    Person2->SetName("Mai Olive");
    Person2->SetAge(25);
    Person2->SetFavoriteColor(PURPLE);

    std::cout<<"Person1 name before change: "<<Person1->GetName()<<" Age: "<<Person1->GetAge()<<std::endl;
    std::cout<<"Person2 name before change: "<<Person2->GetName()<<" Age: "<<Person2->GetAge()<<std::endl;

    delete PrototypePerson;
    delete Person1;
    delete Person2;
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

     delete CustonMealBox01;
     delete MealBox;
}

/*----------------------------------------------------------------------*/
void TestSingleton()
{
    int returnValue = 0;

    std::unique_ptr<Singleton> ptrSingletonClone( Singleton::getInstance(VALOR_CLONADO));
    std::unique_ptr<Singleton> ptrSingleton( Singleton::getInstance(VALOR_INICIAL));

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
