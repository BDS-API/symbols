#pragma once

#include "../bedrock/util/Vec3"


class DimensionConversionData {

public:

    DimensionConversionData(Vec3 const&, int);
    void getOverworldSpawnPoint()const;
    void getNetherScale()const;
};