#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/Random"
#include "../../unmapped/Material"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"
#include "../util/AABB"


class DoorBlock : BlockLegacy {

public:
    virtual DoorBlock::~DoorBlock()
    virtual void getNextBlockPermutation(Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool isInteractiveBlock()const;
    virtual bool isDoorBlock()const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    DoorBlock(std::string const&, int, Material const&, DoorBlock::DoorType);
    bool hasRightHinge(BlockSource &, BlockPos const&)const;
    void getDoorBlocks(BlockSource &, BlockPos const&, Block const**, Block const**)const;
    void getDoorThickness()const;
    void getBlockedDirection(BlockSource &, BlockPos const&)const;
    bool isToggled(BlockSource &, BlockPos const&)const;
    void setToggled(BlockSource &, BlockPos const&, bool)const;
    void getDir(BlockSource &, BlockPos const&)const;
    void getDoorPosition(BlockSource &, BlockPos const&, BlockPos&, BlockPos&)const;
    void _isPlaceable(BlockPos const&, unsigned char, BlockSupportType, BlockSource &)const;
    void shouldFlipTexture(BlockSource &, BlockPos const&, unsigned char)const;
    void getDoorFacing(int);
};