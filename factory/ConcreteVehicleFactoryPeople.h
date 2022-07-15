#include <iostream>
#include <string>
#include "VehicleFactory.h"

class ConcreteVehicleFactoryPeople : public VehicleFactory
{
private:
    /* data */
public:
    ConcreteVehicleFactoryPeople(/* args */);
    ~ConcreteVehicleFactoryPeople();
    virtual VehicleProduct * FatoryMethod(std::string VehicleName) const override;
};

ConcreteVehicleFactoryPeople::ConcreteVehicleFactoryPeople(/* args */)
{
}

ConcreteVehicleFactoryPeople::~ConcreteVehicleFactoryPeople()
{
}
