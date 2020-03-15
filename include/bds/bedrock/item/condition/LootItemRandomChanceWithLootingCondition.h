#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemRandomChanceWithLootingCondition : public LootItemCondition {

public:
    ~LootItemRandomChanceWithLootingCondition(); // _ZN40LootItemRandomChanceWithLootingConditionD2Ev
    virtual void applies(Random &, LootTableContext &); // _ZN40LootItemRandomChanceWithLootingCondition7appliesER6RandomR16LootTableContext
    LootItemRandomChanceWithLootingCondition(float, float); // _ZN40LootItemRandomChanceWithLootingConditionC2Eff
    void deserialize(Json::Value); // _ZN40LootItemRandomChanceWithLootingCondition11deserializeEN4Json5ValueE
};
