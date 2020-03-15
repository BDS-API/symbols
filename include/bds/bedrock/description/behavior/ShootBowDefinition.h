#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class ShootBowDefinition : public BehaviorDefinition {

public:
    ~ShootBowDefinition(); // _ZN18ShootBowDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN18ShootBowDefinition4loadEN4Json5ValueERK15BehaviorFactory
    ShootBowDefinition(); // _ZN18ShootBowDefinitionC2Ev
};
