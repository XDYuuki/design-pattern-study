#include <iostream>
#include <string>
#include "VehicleProduct.h"

class ConcreteCarProduct : public VehicleProduct
{
private:
    std::string VehicleName_;
public:
    ConcreteCarProduct(std::string VehicleName) : VehicleName_(VehicleName){}
    void PickUp(std::string CustumerName) const override;
    void Stop() const override;
};

void ConcreteCarProduct::PickUp(std::string CustumerName) const
{
    std::cout<<this->VehicleName_<<"esta buscando "<<CustumerName<<std::endl;
}

void ConcreteCarProduct::Stop() const
{
    std::cout<<this->VehicleName_<<" parou!"<<std::endl;
}
