#pragma once

#include "ITickingSystem.h"


class BreedableSystem : public ITickingSystem {

public:
    ~BreedableSystem(); // _ZN15BreedableSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN15BreedableSystem4tickER14EntityRegistry
    BreedableSystem(); // _ZN15BreedableSystemC2Ev
};
