#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemRandomDifficultyChanceCondition : public LootItemCondition {

public:
    ~LootItemRandomDifficultyChanceCondition(); // _ZN39LootItemRandomDifficultyChanceConditionD2Ev
    virtual void applies(Random &, LootTableContext &); // _ZN39LootItemRandomDifficultyChanceCondition7appliesER6RandomR16LootTableContext
    LootItemRandomDifficultyChanceCondition(Json::Value); // _ZN39LootItemRandomDifficultyChanceConditionC2EN4Json5ValueE
    void deserialize(Json::Value); // _ZN39LootItemRandomDifficultyChanceCondition11deserializeEN4Json5ValueE
};
