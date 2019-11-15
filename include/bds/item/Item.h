#ifndef BDS_SYMBOLS__ITEM_H
#define BDS_SYMBOLS__ITEM_H

#include <memory>
#include <string>
#include <vector>
#include "../nbt/CompoundTag.h"
#include "../block/Block.h"
#include "ItemInstance.h"

class ItemStack;

class Item {

public:

    // Virtual
    virtual ~Item();

    virtual void tearDown();

    virtual unsigned int *getMaxUseDuration(ItemInstance const *) const;

    virtual unsigned int *getMaxUseDuration(ItemStack const *) const;

    virtual bool isExperimental(ItemDescriptor const *) const;

    virtual void setMaxStackSize(unsigned char);

    virtual void setCategory(CreativeItemCategory);

    virtual void setStackedByData(bool);

    virtual void setMaxDamage(int);

    virtual void setHandEquipped(void);

    virtual void setUseAnimation(UseAnimation);

    virtual void setMaxUseDuration(int);

    virtual void setRequiresWorldBuilder(bool);

    virtual void setExplodable(bool);

    virtual void setIsGlint(bool);

    virtual void setShouldDespawn(bool);

    virtual long getBlockShape() const; // ???
    virtual bool canBeDepleted() const;

    virtual bool canDestroySpecial(Block const &) const;

    virtual long getLevelDataForAux(int) const; //???
    virtual bool isStackedByData() const;

    virtual unsigned int &getMaxDamage() const;

    virtual long getAttackDamage() const; // ???
    virtual bool isHandEquipped() const;

    virtual bool isArmor() const;

    virtual bool isDye() const;

    virtual bool isFertilizer(int) const;

    virtual bool isGlint(ItemStackBase const &) const;

    virtual bool isThrowable() const;

    virtual bool isPattern() const;

    virtual bool showsDurabilityInCreative() const;

    virtual bool
    isWearableThroughLootTable(std::unique_ptr <CompoundTag, std::default_delete<CompoundTag>> const &) const;

    virtual bool canDestroyInCreative() const;

    virtual bool isDestructive(int) const;

    virtual bool isLiquidClipItem(int) const;

    virtual bool requiresInteract() const;

    virtual long appendFormattedHovertext(ItemStackBase const &, Level &,
                                          std::basic_string<char, std::char_traits<char>, std::allocator<char>> &,
                                          bool) const; //???
    virtual bool isValidRepairItem(ItemInstance const &, ItemInstance const &) const;

    virtual long getEnchantSlot() const; //???
    virtual long getEnchantValue() const; //???
    virtual long getArmorValue() const; //???
    virtual bool isComplex() const;

    virtual bool isValidAuxValue(int) const;

    virtual long getDamageChance(int) const;

    virtual long uniqueAuxValues() const; //???
    virtual bool isMultiColorTinted(ItemStack const &) const;

    virtual long getColor(std::unique_ptr <CompoundTag, std::default_delete<CompoundTag>> const &,
                          ItemDescriptor const &) const; //???
    virtual long getBaseColor(ItemStack const &) const;

    virtual long getSecondaryColor(ItemStack const &) const;

    virtual void saveAdditionalData(ItemStackBase const &, CompoundTag &) const;

    virtual void readAdditionalData(ItemStackBase &, CompoundTag const &) const;

    virtual bool isTintable() const;

    virtual ItemStack &use(ItemStack &, Player &) const;

    virtual int useTimeDepleted(ItemInstance &, Level *, Player *) const;

    virtual int useTimeDepleted(ItemStack &, Level *, Player *) const;

    virtual void releaseUsing(ItemInstance &, Player *, int) const; //???
    virtual void releaseUsing(ItemStack &, Player *, int) const; //???
    virtual float getDestroySpeed(ItemInstance const &, Block const &) const;

    virtual void hurtEnemy(ItemInstance &, Mob *, Mob *) const; //???
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *) const; //???
    virtual long mineBlock(ItemInstance &, Block const &, int, int, int, Actor *) const; //???
    virtual long mineBlock(ItemStack &, Block const &, int, int, int, Actor *) const; //???
    virtual std::string &buildDescriptionId(ItemDescriptor const &, std

    :unique_ptr <CompoundTag, std::default_delete<CompoundTag>> const&) const;

    virtual std::string &buildEffectDescriptionName(ItemStackBase const &) const;

    virtual std::string &buildCategoryDescriptionName() const;

    virtual void readUserData(ItemStackBase &, IDataInput &ReadOnlyBinaryStream &

    ) const;

    virtual void writeUserData(ItemStackBase const &, IDataOutput &) const;

    virtual int getMaxStackSize(ItemDescriptor const &) const;

    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool) const;

    virtual void refreshInContainer(ItemStackBase &, Level &) const;

    virtual unsigned int getCooldownType() const;

    virtual unsigned int getCooldownTime() const;

    virtual void fixupOnLoad(ItemStackBase &) const;

    virtual void fixupOnLoad(ItemStackBase &, Level &) const;

    virtual short getDamageValue(std

    :unique_ptr <CompoundTag, std::default_delete<CompoundTag>> const&) const;

    virtual void setDamageValue(ItemStackBase &, short) const;

    virtual unsigned int
    getInHandUpdateType(Player const &, ItemInstance const &, ItemInstance const &, bool, bool) const;

    virtual unsigned int getInHandUpdateType(Player const &, ItemStack const &, ItemStack const &, bool, bool) const;

    virtual bool isSameItem(ItemStackBase const &, ItemStackBase const &) const;

    virtual std::string &getInteractText(Player const &) const;

    virtual long getAnimationFrameFor(Mob *, bool, ItemStack const *, bool) const; //???
    virtual bool isEmissive(int) const;

    virtual std::vector <TextureUVCoodinateSet> *getIcon(ItemStackBase const &, int, bool) const;

    virtual long getIconYOffset(void) const;

    virtual void setIcon(std::string const &, int);

    virtual void setIcon(TextureUVCoordinateSet);

    virtual void setIconAtlas(std::string);

    virtual bool canBeCharged() const;

    virtual void playSoundIncrementally(ItemInstance const &, Mob &) const;

    virtual void playSoundIncrementally(ItemStack const &, Mob &) const;

    virtual std::string &getAuxValuesDescription() const;

    virtual bool _checkUseOnPermissions(Actor &, ItemInstance &, unsigned char const &, BlockPos const &) const;

    virtual bool _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const &, BlockPos const &) const;

    virtual bool _calculatePlacePos(ItemInstance &, Actor &, unsigned char &, BlockPos &) const;

    virtual bool _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &) const;

    virtual bool _useOn(ItemInstance &, Actor &, BlockPos &, unsigned char &, float, float, float) const;

    virtual bool _useOn(ItemStack &, Actor &, BlockPos &, unsigned char &, float, float, float) const;

    // Non-virtual

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
