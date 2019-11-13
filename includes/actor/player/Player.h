#ifndef BDSAPI_SYMBOLS_PLAYER_H
#define BDSAPI_SYMBOLS_PLAYER_H

#include "../Actor.h"
#include "../../level/chunk/ChunkViewSource.h"

class Player : Actor {

public:
    unsigned int getAttackDamage();

    const bool getAutoJumping();

    const ChunkViewSource &getChunkSource();

    const unsigned int getChunkRadius(); //1905
};

#endif //BDSAPI_SYMBOLS_PLAYER_H
