class VehicleProduct
{
public:
    virtual ~VehicleProduct(){}
    virtual void PickUp(std::string CustumerName) const = 0;
    virtual void Stop() const = 0;
};