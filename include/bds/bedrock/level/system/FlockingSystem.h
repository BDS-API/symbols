#pragma once

#include "ITickingSystem.h"


class FlockingSystem : public ITickingSystem {

public:
    ~FlockingSystem(); // _ZN14FlockingSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN14FlockingSystem4tickER14EntityRegistry
    FlockingSystem(); // _ZN14FlockingSystemC2Ev
};
