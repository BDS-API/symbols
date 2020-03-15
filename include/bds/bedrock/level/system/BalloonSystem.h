#pragma once

#include "ITickingSystem.h"


class BalloonSystem : public ITickingSystem {

public:
    ~BalloonSystem(); // _ZN13BalloonSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN13BalloonSystem4tickER14EntityRegistry
    BalloonSystem(); // _ZN13BalloonSystemC2Ev
};
