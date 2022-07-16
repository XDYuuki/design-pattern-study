#include "ConcreteVehicleFactoryPeople.h"

VehicleProduct * ConcreteVehicleFactoryPeople::FatoryMethod(std::string DriverName, EServiceType ServiceType) const
{
    return new ConcreteCarProduct(DriverName, ServiceType);
}