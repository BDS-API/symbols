#ifndef BDSAPIIMPL_CONTAINER_H
#define BDSAPIIMPL_CONTAINER_H

#include <vector>
#include "../item/ItemStack.h"

class Container {

public:
    void addItem(ItemStack &);

    bool addItemToFirstEmptySlot(ItemStack &);

    unsigned int findFirstSlotForItem(const ItemStack &) const;

    unsigned int getContainerType();

    unsigned int getItemCount(const ItemStack &);

    unsigned int getRedstoneSignalFromContainer();

    std::vector<ItemStack> &getSlotCopies() const;

    std::vector<ItemStack> &getSlots() const;

    bool hasCustomName() const;

    bool hasRoomForItem(const ItemStack &);

    int removeAllItems();

    void removeItem(int slot, int count);

    void setCustomName(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
};

#endif //BDSAPIIMPL_CONTAINER_H
