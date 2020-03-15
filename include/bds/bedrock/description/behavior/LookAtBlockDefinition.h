#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class LookAtBlockDefinition : public BehaviorDefinition {

public:
    ~LookAtBlockDefinition(); // _ZN21LookAtBlockDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN21LookAtBlockDefinition4loadEN4Json5ValueERK15BehaviorFactory
    LookAtBlockDefinition(); // _ZN21LookAtBlockDefinitionC2Ev
};
