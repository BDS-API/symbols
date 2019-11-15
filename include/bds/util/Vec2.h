#ifndef BDSAPI_VEC2_H
#define BDSAPI_VEC2_H

class Vec2 {

public:
    Vec2(float, float);

    Vec2(void);

    float distanceToSqr(const Vec2 &) const;

    float dot() const;

    float length() const;

    float lengthSquared() const;

    Vec2 &normalized() const;
};

#endif //BDSAPI_VEC2_H
