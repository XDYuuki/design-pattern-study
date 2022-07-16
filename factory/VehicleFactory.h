#ifndef VEHICLE_FACTORY
#define VEHICLE_FACTORY

#include <iostream>
#include <string>
#include "VehicleProduct.h"

typedef enum
{
    CAR_POOL_X = 0,
    CAR_POOL_BLACK,
    CAR_POOL_PREMIUM,
    DELIVERY_MOTOCYCLE,
    DELIVERY_CAR,
    DELIVERY_TRUCK
}EServiceType;


class VehicleFactory
{
private:
    /* data */
public:
    virtual VehicleProduct * FatoryMethod(std::string DriverName, EServiceType ServiceType) const = 0;
};

#endif

//Create concretes people like uber x, uber black etc
//create concretes  delivery like bike, motocycle, boat, truck...
