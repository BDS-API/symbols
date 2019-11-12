#ifndef BDSAPI_CHUNKPOS_H
#define BDSAPI_CHUNKPOS_H

#include "Vec3.h"

class ChunkPos {

public:
    int x;
    int z;

    ChunkPos(int x, int z);

    ChunkPos(const Vec3 &);
};

#endif //BDSAPI_CHUNKPOS_H
