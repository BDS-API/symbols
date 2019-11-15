#ifndef BDS_SYMBOLS__ITEMINSTANCE_H
#define BDS_SYMBOLS__ITEMINSTANCE_H

#include "../block/Block.h"
#include "../../../includes/nbt/CompoundTag.h"
#include "Item.h"
#include "ItemStack.h"
#include "ItemStackBase.h"

class Item;

class ItemStack;

class ItemInstance : public ItemStackBase {

public:
    ItemInstance *EMPTY_ITEM;

    ItemInstance(const Block &, int, const CompoundTag *);

    ItemInstance(const Item &);

    ItemInstance(const Item &, int);

    ItemInstance(const Item &, int, int);

    ItemInstance(const Item &, int, int, const CompoundTag *);

    ItemInstance(const ItemInstance &);

    ItemInstance(const ItemStack &);

    ItemInstance();

    ItemInstance &fromTag(const CompoundTag &);

    ItemInstance &operator=(const ItemInstance &);
};

#endif //BDS_SYMBOLS__ITEMINSTANCE_H
