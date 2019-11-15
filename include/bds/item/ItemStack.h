#ifndef BDS_SYMBOLS__ITEMSTACK_H
#define BDS_SYMBOLS__ITEMSTACK_H

#include "Item.h"
#include "../../../includes/nbt/CompoundTag.h"
#include "../level/Level.h"
#include "../block/Block.h"
#include "../actor/Mob.h"
#include "ItemStackBase.h"

class Item;

class Player;

class ItemStack : public ItemStackBase {

public:
    ItemStack(const Item &);

    ItemStack(const Item &, int);

    ItemStack(const Item &, int, int);

    ItemStack &clone() const;

    ItemStack &fromTag(const CompoundTag &);

    ItemStack &fromTag(const CompoundTag &, Level &);

    float getDestroySpeed(const Block &) const;

    unsigned int getMaxUseDuration() const;

    bool inventoryTick(Level &, Actor &, int, bool);

    bool mineBlock(const Block &, int, int, int, Mob *);

    ItemStack &operator=(const ItemStack &);

    bool releaseUsing(Player *, int);

    bool removeEnchants();

    bool sameItemAndAuxAndBlockData(const ItemStack &) const;

    ItemStack &use(Player *);

    void useAsFuel();

    bool useOn(Actor &, int, int, int, int, float, float, float);

    unsigned int useTimeDepleted(Level *, Player *);
};

#endif //BDS_SYMBOLS__ITEMSTACK_H
