#ifndef CONCRETE_VEHICLE_FACTORY_PEOPLE
#define CONCRETE_VEHICLE_FACTORY_PEOPLE

#include <iostream>
#include <string>
#include "VehicleFactory.h"
#include "VehicleProduct.h"
#include "ConcreteCarProduct.h"

class ConcreteVehicleFactoryPeople : public VehicleFactory
{
public:
    VehicleProduct * FatoryMethod(std::string DriverName, EServiceType ServiceType) const override;
};

#endif
