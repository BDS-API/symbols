#pragma once

#include "../Mob"


class MoveTowardsTargetGoal : Goal {

public:
    virtual MoveTowardsTargetGoal::~MoveTowardsTargetGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    MoveTowardsTargetGoal(Mob &, float, float);
};