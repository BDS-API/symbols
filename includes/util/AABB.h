#ifndef BDSAPIIMPL_AABB_H
#define BDSAPIIMPL_AABB_H

#include "Vec3.h"

class AABB {

public:
    static AABB *EMPTY;

    AABB(const Vec3 &min, const Vec3 &max);

    AABB(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

    AABB();
};

#endif //BDSAPIIMPL_AABB_H
