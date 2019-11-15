#ifndef BDS_SYMBOLS__ITEM_H
#define BDS_SYMBOLS__ITEM_H

#include <memory>
#include "../block/Block.h"
#include "ItemInstance.h"

class ItemStack;

class Item {

public:
    Item(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, short);

//    void addCreativeItem(const Block &);
//
//    void addCreativeItem(Item *, short);
//
//    void addCreativeItem(const ItemInstance &);
//
//    void addCreativeItem(const ItemStack &);
//
//    void addCreativeItem(short, short);

    unsigned int getId() const;

    virtual unsigned int getAttackDamage() const;

    class Tier {
        int level;
        int uses;
        float speed;
        int attackDamageBonus;
        int enchantmentValue;

    public:
        Tier(int level, int uses, float speed, int attackDamageBonus, int enchantmentValue);

        unsigned int getAttackDamageBonus() const;

        unsigned int getEnchantmentValue() const;

        unsigned int getLevel() const;

        float getSpeed() const;

        unsigned int getUses() const;
    };
};

#endif //BDS_SYMBOLS__ITEM_H
