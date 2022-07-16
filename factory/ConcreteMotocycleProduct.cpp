#include "ConcreteMotocycleProduct.h"

void ConcreteMotocycleProduct::PickUp(std::string CustumerName) const
{
    std::cout<<this->DriverName_<<" esta buscando a entrega de "<<CustumerName<<std::endl;
    std::cout<<"O tamanho do pacote e:  "<<this->PackageSize_<<" cm cubicos."<<std::endl;
}

void ConcreteMotocycleProduct::Stop() const
{
    std::cout<<this->DriverName_<<" parou!"<<std::endl;
}

void ConcreteMotocycleProduct::SetPackageSize(double PackageSize)
{
    this->PackageSize_ = PackageSize;
}
