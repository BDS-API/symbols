#ifndef BDS_SYMBOLS_VEC2_H
#define BDS_SYMBOLS_VEC2_H

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

#endif //BDS_SYMBOLS_VEC2_H
