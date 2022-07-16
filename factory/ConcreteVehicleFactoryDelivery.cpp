#include "ConcreteVehicleFactoryDelivery.h"

VehicleProduct * ConcreteVehicleFactoryDelivery::FatoryMethod(std::string DriverName, EServiceType ServiceType) const
{
    return new ConcreteMotocycleProduct(DriverName, ServiceType);
}