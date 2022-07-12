#include <iostream>
#include <string>
#include "ConcretePerson.h"

PersonPrototype * ConcretePerson::Clone() const
{
    return new ConcretePerson(*this);
}