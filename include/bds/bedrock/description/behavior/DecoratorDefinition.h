#pragma once

#include "../../../unmapped/BehaviorTreeDefinitionPtr.h"
#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class DecoratorDefinition : public BehaviorDefinition {

public:
    ~DecoratorDefinition(); // _ZN19DecoratorDefinitionD2Ev
    DecoratorDefinition(); // _ZN19DecoratorDefinitionC2Ev
    void get()const; // _ZNK19DecoratorDefinition3getEv
    void _decoratorLoadChildBehavior(Json::Value, BehaviorFactory const&, BehaviorTreeDefinitionPtr); // _ZN19DecoratorDefinition27_decoratorLoadChildBehaviorEN4Json5ValueERK15BehaviorFactory25BehaviorTreeDefinitionPtr
};
