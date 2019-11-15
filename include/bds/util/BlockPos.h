#ifndef BDSAPI_BLOCKPOS_H
#define BDSAPI_BLOCKPOS_H

#include "Vec3.h"
#include "ChunkPos.h"

class Vec3;

class BlockPos {

public:
    int x;
    int y;
    int z;

    BlockPos(int, int, int);

    BlockPos(const Vec3 &);

    BlockPos(const BlockPos &);

    BlockPos();
};

#endif //BDSAPI_BLOCKPOS_H
