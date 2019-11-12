#ifndef BDSAPI_SYMBOLS_ACTOR_H
#define BDSAPI_SYMBOLS_ACTOR_H

class Actor {

public:
    float distanceTo(const Actor *);

    float distanceToSqr(const Actor *);
};

#endif //BDSAPI_SYMBOLS_ACTOR_H
