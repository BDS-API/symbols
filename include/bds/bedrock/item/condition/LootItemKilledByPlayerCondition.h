#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemKilledByPlayerCondition : public LootItemCondition {

public:
    ~LootItemKilledByPlayerCondition(); // _ZN31LootItemKilledByPlayerConditionD2Ev
    virtual void applies(Random &, LootTableContext &); // _ZN31LootItemKilledByPlayerCondition7appliesER6RandomR16LootTableContext
    void deserialize(Json::Value); // _ZN31LootItemKilledByPlayerCondition11deserializeEN4Json5ValueE
    LootItemKilledByPlayerCondition(); // _ZN31LootItemKilledByPlayerConditionC2Ev
};
