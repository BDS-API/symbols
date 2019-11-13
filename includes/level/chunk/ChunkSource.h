#ifndef BDSAPI_CHUNKSOURCE_H
#define BDSAPI_CHUNKSOURCE_H

#include "LevelChunk.h"
#include "../../util/ChunkPos.h"
#include "../Dimension.h"
#include "../Level.h"

class ChunkSource {

public:
    LevelChunk &getExistingChunk(const ChunkPos &);

    LevelChunk &getGeneratedChunk(const ChunkPos &);

    const bool isWithinWorldLimit(const ChunkPos &);

    bool loadChunk(LevelChunk *, bool);

    const Dimension &getDimension();

    const Level &getLevel();
};

#endif //BDSAPI_CHUNKSOURCE_H
