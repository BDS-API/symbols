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

    bool isWithinWorldLimit(const ChunkPos &) const;

    bool loadChunk(LevelChunk *, bool);

    Dimension &getDimension() const;

    Level &getLevel() const;
};

#endif //BDSAPI_CHUNKSOURCE_H
