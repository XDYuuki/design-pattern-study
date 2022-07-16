#ifndef CONCRETE_VEHICLE_FACTORY_DELIVERY
#define CONCRETE_VEHICLE_FACTORY_DELIVERY

#include <iostream>
#include <string>
#include "VehicleFactory.h"
#include "VehicleProduct.h"
#include "ConcreteMotocycleProduct.h"

class ConcreteVehicleFactoryDelivery : public VehicleFactory
{
public:
    VehicleProduct * FatoryMethod(std::string DriverName, EServiceType ServiceType) const override;
};

#endif
