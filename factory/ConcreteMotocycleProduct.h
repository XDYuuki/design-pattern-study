#include <iostream>
#include <string>
#include "VehicleProduct.h"

class ConcreteMotocycleProduct : public VehicleProduct
{
private:
    std::string VehicleName_;
public:
    ConcreteMotocycleProduct(std::string VehicleName) : VehicleName_(VehicleName){}
    void PickUp(std::string CustumerName) const override;
    void Stop() const override;
};

void ConcreteMotocycleProduct::PickUp(std::string CustumerName) const
{
    std::cout<<this->VehicleName_<<"esta buscando a entrega de "<<CustumerName<<std::endl;
}

void ConcreteMotocycleProduct::Stop() const
{
    std::cout<<this->VehicleName_<<" parou!"<<std::endl;
}
