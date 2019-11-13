#ifndef BDSAPI_SYMBOLS_ACTOR_H
#define BDSAPI_SYMBOLS_ACTOR_H

#include "../level/Level.h"
#include "../util/StateVectorComponent.h"

class Actor {

public:
    const StateVectorComponent &getPos();

    const float distanceTo(const Actor *);

    const float distanceTo(const Vec3 *);

    const float distanceToSqr(const Actor *);

    const float distanceToSqr(const Vec3 *);

    const Level &getLevel();
};

#endif //BDSAPI_SYMBOLS_ACTOR_H
