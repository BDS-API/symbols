#ifndef BDS_SYMBOLS_ACTOR_H
#define BDS_SYMBOLS_ACTOR_H

#include "../level/Level.h"
#include "../util/StateVectorComponent.h"
#include "../util/Vec3.h"

class Level;

class Actor {

public:
    StateVectorComponent &getPos() const;

    float distanceTo(const Actor *) const;

    float distanceTo(const Vec3 *) const;

    float distanceToSqr(const Actor *) const;

    float distanceToSqr(const Vec3 *) const;

    Level &getLevel() const;
};

#endif //BDS_SYMBOLS_ACTOR_H
