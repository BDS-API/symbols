#ifndef BDS_SYMBOLS__ITEMSTACKBASE_H
#define BDS_SYMBOLS__ITEMSTACKBASE_H

#include "../../../includes/nbt/CompoundTag.h"
#include "../block/Block.h"
#include "Item.h"
#include "ItemInstance.h"
#include "../actor/Actor.h"

class Item;

class ItemInstance;

class ItemStackBase {

public:
    ItemStackBase(const Block &, int, const CompoundTag *);

    ItemStackBase(const Item &);

    ItemStackBase(const Item &, int);

    ItemStackBase(const Item &, int, int);

    ItemStackBase(const Item &, int, int, const CompoundTag *);

    ItemStackBase();

    bool add(int);

    bool canBeCharged() const;

    bool canDestroy(const Block &) const;

    bool canDestroySpecial(const Block &) const;

    bool canPlaceOn(const Block &) const;

    bool clearChargedItem();

    ItemInstance &getChargedItem() const;

    unsigned int getDamageValue() const;

    unsigned int getId() const;

    unsigned int getIdAux() const;

    unsigned int getIdAuxEnchanted() const;

    bool getIsValidPickupTime() const;

    Item &getItem() const;

    unsigned int getMaxDamage() const;

    char getMaxStackSize() const;

    void hurtAndBreak(int, Actor *);

    bool isArmorItem() const;

    bool isBlock() const;

    bool isDamageableItem() const;

    bool isDamaged() const;

    bool isEmptyStack() const;

    bool isEnchanted() const;

    bool isEnchantingBook() const;

    bool isEquivalentArmor(const ItemStackBase &) const;

    bool isExperimental() const;

    bool isExplodable() const;

    bool isFullStack() const;

    bool isGlint() const;

    bool isHorseArmorItem() const;

    bool isInstance(const Item &) const;

    bool isItem() const;

    bool isLiquidClipItem() const;

    bool isMusicDiscItem() const;

    bool isNull() const;

    bool isOffhandItem() const;

    bool isPattern() const;

    bool isPotionItem() const;

    bool isStackable(const ItemStackBase &) const;

    bool isStackable() const;

    bool isStackedByData() const;

    bool isThrowable() const;

    bool isValid() const;

    bool isValidAuxValue() const;

    bool isWearableItem() const;

    bool matches(const ItemStackBase &) const;

    bool matchesChargedItem(const ItemStackBase &);

    bool matchesItem(const ItemStackBase &);

    operator bool() const;

    bool operator!=(const ItemStackBase &) const;

    ItemStackBase &operator=(const ItemStackBase &);

    bool operator==(const ItemStackBase &) const;

    bool remove();

    bool sameItem(const ItemStackBase &) const;

    bool sameItem(int, int) const;

    bool sameItemAndAux(const ItemStackBase &) const;

    ItemStackBase &save();

    bool set(int);

    void setBlock(const Block &);

    bool setChargedItem(const ItemInstance &, bool);

    void
    setCustomLore(const std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> &);

    void setCustomName(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);

    bool setDamageValue(short);

    void setJustBrewed();

    void setNull();

    void setPickupTime();

    void setRepairCost(int);

    void setShowPickup(bool);

    bool setStackSize(int);

    bool wasJustBrewed() const;
};

#endif //BDS_SYMBOLS__ITEMSTACKBASE_H
