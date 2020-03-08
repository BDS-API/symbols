#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Material"
#include "../util/BlockPos"


class LiquidBlockDynamic : LiquidBlock {

public:
    virtual LiquidBlockDynamic::~LiquidBlockDynamic()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;

    LiquidBlockDynamic(std::string const&, int, Material const&);
    void _spread(BlockSource &, BlockPos const&, int, bool)const;
    void _trySpreadTo(BlockSource &, BlockPos const&, int, BlockPos const&, unsigned char)const;
    void _canSpreadTo(BlockSource &, BlockPos const&, BlockPos const&, unsigned char)const;
    void shouldBecomeStatic(BlockSource &, BlockPos const&, Random &)const;
    void _tick(BlockSource &, BlockPos const&, Random &, bool)const;
    void _getHighest(BlockSource &, BlockPos const&, int, int &)const;
    void _setStatic(BlockSource &, BlockPos const&, bool)const;
    void _isWaterBlocking(BlockSource &, BlockPos const&, BlockPos const&, unsigned char)const;
    void _getSpread(BlockSource &, BlockPos const&)const;
    void _getSlopeDistance(BlockSource &, BlockPos const&, int, int)const;
};