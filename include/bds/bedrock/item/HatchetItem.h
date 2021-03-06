#pragma once

#include "DiggerItem.h"
#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class HatchetItem : public DiggerItem {

public:
    ~HatchetItem(); // _ZN11HatchetItemD2Ev
    virtual void getEnchantSlot()const; // _ZNK11HatchetItem14getEnchantSlotEv
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const; // _ZNK11HatchetItem15getDestroySpeedERK12ItemInstanceRK5Block
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK11HatchetItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    HatchetItem(std::string const&, int, Item::Tier const&); // _ZN11HatchetItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRKN4Item4TierE
};
