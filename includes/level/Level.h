#ifndef BDSAPI_LEVEL_H
#define BDSAPI_LEVEL_H

#include "../actor/player/Player.h"
#include "LevelData.h"
#include <vector>

class Level {

public:

    std::vector<Player *> &getActivePlayers() const;

    const LevelData &getLevelData();
};

#endif //BDSAPI_LEVEL_H
