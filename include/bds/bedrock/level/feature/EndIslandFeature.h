#pragma once

#include "Feature.h"


class EndIslandFeature : public Feature {

public:
    ~EndIslandFeature(); // _ZN16EndIslandFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16EndIslandFeature5placeER11BlockSourceRK8BlockPosR6Random
    EndIslandFeature(); // _ZN16EndIslandFeatureC2Ev
};
