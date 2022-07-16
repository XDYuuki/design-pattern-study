#ifndef CONCRETE_MOTOCYCLE_PRODUCT
#define CONCRETE_MOTOCYCLE_PRODUCT

#include <iostream>
#include <string>
#include "VehicleProduct.h"
#include "VehicleFactory.h"

#define PACKAGE_SIZE_ZERO 0

class ConcreteMotocycleProduct : public VehicleProduct
{
private:
    std::string DriverName_;
    EServiceType ServiceType_;
    int PackageSize_;
public:
    ConcreteMotocycleProduct(std::string DriverName, EServiceType ServiceType) 
    : DriverName_(DriverName), ServiceType_(ServiceType), PackageSize_(PACKAGE_SIZE_ZERO){}
    void PickUp(std::string CustumerName) const override;
    void Stop() const override;
    void SetPackageSize(double PackageSize);
};

#endif