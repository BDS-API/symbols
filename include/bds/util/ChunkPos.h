#ifndef BDS_SYMBOLS_CHUNKPOS_H
#define BDS_SYMBOLS_CHUNKPOS_H

#include "Vec3.h"

class Vec3;

class ChunkPos {

public:
    int x;
    int z;

    ChunkPos(int x, int z);

    ChunkPos(const Vec3 &);
};

#endif //BDS_SYMBOLS_CHUNKPOS_H
