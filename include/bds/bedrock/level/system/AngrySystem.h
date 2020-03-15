#pragma once

#include "ITickingSystem.h"


class AngrySystem : public ITickingSystem {

public:
    ~AngrySystem(); // _ZN11AngrySystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN11AngrySystem4tickER14EntityRegistry
    AngrySystem(); // _ZN11AngrySystemC2Ev
};
