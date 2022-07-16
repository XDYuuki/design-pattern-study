#ifndef VEHICLE_PRODUCT
#define VEHICLE_PRODUCT

class VehicleProduct
{
public:
    virtual void PickUp(std::string CustumerName) const = 0;
    virtual void Stop() const = 0;
};

#endif