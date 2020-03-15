#pragma once

#include "IStructurePoolBlockTagPredicate.h"


class StructurePoolBlockTagPredicateAlwaysTrue : public IStructurePoolBlockTagPredicate {

public:
    ~StructurePoolBlockTagPredicateAlwaysTrue(); // _ZN40StructurePoolBlockTagPredicateAlwaysTrueD2Ev
    virtual void test(Block const&, CompoundTag const&)const; // _ZNK40StructurePoolBlockTagPredicateAlwaysTrue4testERK5BlockRK11CompoundTag
    StructurePoolBlockTagPredicateAlwaysTrue(); // _ZN40StructurePoolBlockTagPredicateAlwaysTrueC2Ev
};
