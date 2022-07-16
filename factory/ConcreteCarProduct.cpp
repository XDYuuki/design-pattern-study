#include "ConcreteCarProduct.h"

void ConcreteCarProduct::PickUp(std::string CustumerName) const
{
    std::cout<<this->DriverName_<<" esta buscando "<<CustumerName<<std::endl;
}

void ConcreteCarProduct::Stop() const
{
    std::cout<<this->DriverName_<<" parou! Chegamos ao destino: "<<this->AddressDestiny_<<std::endl;
}

void ConcreteCarProduct::SetAddressDestiny(std::string Address)
{
    this->AddressDestiny_ = Address;
}