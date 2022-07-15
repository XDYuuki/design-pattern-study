#include <iostream>
#include <string>
#include "VehicleProduct.h"

class VehicleFactory
{
private:
    /* data */
public:
    virtual ~VehicleFactory();
    virtual VehicleProduct * FatoryMethod(std::string VehicleName) const = 0;
};

//Create concretes people like uber x, uber black etc
//create concretes  delivery like bike, motocycle, boat, truck...
