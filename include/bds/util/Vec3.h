#ifndef BDS_SYMBOLS_VEC3_H
#define BDS_SYMBOLS_VEC3_H

#include "BlockPos.h"

class Vec3 {

public:
    float x;
    float y;
    float z;

    Vec3(float, float, float);

    Vec3(const BlockPos &);

    Vec3(float);

    Vec3();

    Vec3 &abs() const;

    Vec3 &add(float, float, float) const;

    Vec3 &ceil() const;

    Vec3 &clamp(const Vec3 &, const Vec3 &, const Vec3 &);

    bool clipX(const Vec3 &, float, Vec3 &) const;

    bool clipY(const Vec3 &, float, Vec3 &) const;

    bool clipZ(const Vec3 &, float, Vec3 &) const;

    float distanceTo(const Vec3 &) const;

    float distanceToSqr(const Vec3 &) const;

    float dot(const Vec3 &) const;

    Vec3 &floor(float) const;

    bool isNan() const;

    float length() const;

    float lengthSquared() const;

    float lengthXZ() const;

    float lengthXZSquared() const;

    Vec3 &negated() const;

    Vec3 &normalized() const;

    Vec3 &mul(const Vec3 &, const Vec3 &);

    Vec3 &min(const Vec3 &, const Vec3 &);

    Vec3 &max(const Vec3 &, const Vec3 &);

    Vec3 &lerp(const Vec3 &, const Vec3 &, float);
};

#endif //BDS_SYMBOLS_VEC3_H
