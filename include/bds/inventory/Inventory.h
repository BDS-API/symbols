#ifndef BDS_SYMBOLS__INVENTORY_H
#define BDS_SYMBOLS__INVENTORY_H

#include "../actor/player/Player.h"
#include "../item/ItemStack.h"

class Inventory {

public:
    Inventory(Player *);

    bool add(ItemStack &);

    bool canAdd(const ItemStack &) const;

    unsigned int dropAll(bool);

    unsigned int getEmptySlotsCount() const;

    unsigned int getFirstEmptySlot() const;

    void init();

    void setContainerSize();

    void tick();
};

#endif //BDS_SYMBOLS__INVENTORY_H
