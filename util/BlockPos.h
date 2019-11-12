#ifndef BDSAPI_BLOCKPOS_H
#define BDSAPI_BLOCKPOS_H

#include "Vec3.h"
#include "ChunkPos.h"

class BlockPos {

public:
    int x;
    int y;
    int z;

    BlockPos(int, int, int);

    BlockPos(ChunkPos);

    BlockPos(Vec3);

    BlockPos(BlockPos);

    BlockPos();
};

#endif //BDSAPI_BLOCKPOS_H
