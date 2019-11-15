#ifndef BDS_SYMBOLS_PLAYER_H
#define BDS_SYMBOLS_PLAYER_H

#include "../Actor.h"
#include "../../level/chunk/ChunkViewSource.h"
#include "../../container/IContainerManager.h"
#include "../../container/PlayerUIContainer.h"

class Player : public Actor {

public:
    unsigned int getAttackDamage();

    bool getAutoJumping() const;

    ChunkViewSource &getChunkSource() const;

    unsigned int getChunkRadius() const; //1905

    void addLevels(int);

    IContainerManager &getContainerManager();

    PlayerUIContainer &getPlayerUIContainer();
};

#endif //BDS_SYMBOLS_PLAYER_H
