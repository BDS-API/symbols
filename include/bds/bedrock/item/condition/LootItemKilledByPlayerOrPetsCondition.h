#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemKilledByPlayerOrPetsCondition : public LootItemCondition {

public:
    ~LootItemKilledByPlayerOrPetsCondition(); // _ZN37LootItemKilledByPlayerOrPetsConditionD2Ev
    virtual void applies(Random &, LootTableContext &); // _ZN37LootItemKilledByPlayerOrPetsCondition7appliesER6RandomR16LootTableContext
    void deserialize(Json::Value); // _ZN37LootItemKilledByPlayerOrPetsCondition11deserializeEN4Json5ValueE
    LootItemKilledByPlayerOrPetsCondition(); // _ZN37LootItemKilledByPlayerOrPetsConditionC2Ev
};
