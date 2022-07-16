#ifndef CONCRETE_CAR_PRODUCT
#define CONCRETE_CAR_PRODUCT

#include <iostream>
#include <string>
#include "VehicleProduct.h"
#include "VehicleFactory.h"

#define ADDR_PLACE_HOLDER "---"

class ConcreteCarProduct : public VehicleProduct
{
private:
    std::string DriverName_;
    EServiceType ServiceType_;
    std::string AddressDestiny_;
public:
    ConcreteCarProduct(std::string DriverName, EServiceType ServiceType) 
    : DriverName_(DriverName), ServiceType_(ServiceType), AddressDestiny_(ADDR_PLACE_HOLDER){}
    void PickUp(std::string CustumerName) const override;
    void Stop() const override;
    void SetAddressDestiny(std::string Address);
};

#endif