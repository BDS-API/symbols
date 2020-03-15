#pragma once

#include "ITickingSystem.h"


class InteractSystem : public ITickingSystem {

public:
    ~InteractSystem(); // _ZN14InteractSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN14InteractSystem4tickER14EntityRegistry
    InteractSystem(); // _ZN14InteractSystemC2Ev
};
