#ifndef BDS_SYMBOLS__AABB_H
#define BDS_SYMBOLS__AABB_H

#include "Vec3.h"

class AABB {

public:
    static AABB *EMPTY;

    AABB(const Vec3 &min, const Vec3 &max);

    AABB(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

    AABB();
};

#endif //BDS_SYMBOLS__AABB_H
