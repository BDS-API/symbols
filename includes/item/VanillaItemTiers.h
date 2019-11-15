#ifndef BDSAPIIMPL_VANILLAITEMTIERS_H
#define BDSAPIIMPL_VANILLAITEMTIERS_H

#include "Item.h"

class VanillaItemTiers {

public:
    static Item::Tier *WOOD;
    static Item::Tier *STONE;
    static Item::Tier *IRON;
    static Item::Tier *GOLD;
    static Item::Tier *DIAMOND;

    static ItemStack &getTierItem(const Item::Tier &);
};

#endif //BDSAPIIMPL_VANILLAITEMTIERS_H
