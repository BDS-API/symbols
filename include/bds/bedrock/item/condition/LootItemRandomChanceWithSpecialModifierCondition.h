#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemRandomChanceWithSpecialModifierCondition : public LootItemCondition {

public:
    ~LootItemRandomChanceWithSpecialModifierCondition(); // _ZN48LootItemRandomChanceWithSpecialModifierConditionD2Ev
    virtual void applies(Random &, LootTableContext &); // _ZN48LootItemRandomChanceWithSpecialModifierCondition7appliesER6RandomR16LootTableContext
    LootItemRandomChanceWithSpecialModifierCondition(float); // _ZN48LootItemRandomChanceWithSpecialModifierConditionC2Ef
    void deserialize(Json::Value); // _ZN48LootItemRandomChanceWithSpecialModifierCondition11deserializeEN4Json5ValueE
};
