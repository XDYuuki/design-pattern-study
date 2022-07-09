#ifndef PROTOTYPE_INTERFACE
#define PROTOTYPE_INTERFACE

class PrototypeInterface
{
public:
    virtual PrototypeInterface *Clone() const = 0;
};

#endif