#ifndef BDS_SYMBOLS__WEAPONITEM_H
#define BDS_SYMBOLS__WEAPONITEM_H

#include "Item.h"

class WeaponItem : public Item {

public:

    WeaponItem(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, int,
               const Tier &);

    virtual ~WeaponItem();

    virtual bool canDestroySpecial(const Block &) const;

    virtual long getAttackDamage() const;

    virtual bool isHandEquipped() const;

    virtual bool canDestroyInCreative() const;

    virtual void appendFormattedHovertext(const ItemStackBase &, Level &,
                                          const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &,
                                          bool) const;

    virtual bool isValidRepairItem(const ItemInstance &, const ItemInstance &) const;

    virtual long getEnchantSlot() const;

    virtual long getEnchantValue() const;

    virtual ItemStack &use(ItemStack &, Player &) const;

    virtual float getDestroySpeed(const ItemInstance &, const Block &) const;

    virtual void hurtEnemy(ItemStack &, Mob *, Mob *) const;
};

#endif //BDS_SYMBOLS__WEAPONITEM_H
