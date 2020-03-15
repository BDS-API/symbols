#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class FindBlockDefinition : public BehaviorDefinition {

public:
    ~FindBlockDefinition(); // _ZN19FindBlockDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN19FindBlockDefinition4loadEN4Json5ValueERK15BehaviorFactory
    FindBlockDefinition(); // _ZN19FindBlockDefinitionC2Ev
};
