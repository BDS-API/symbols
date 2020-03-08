#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


class BreathableComponent {

public:

    BreathableComponent(BreathableComponent&&);
    BreathableComponent(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getAirSupply()const;
    void setAirSupply(short);
    void getMaxAirSupply()const;
    void setMaxAirSupply(short);
    void getSuffocateTime()const;
    void getInhaleTime()const;
    void getAirRegenPerTick()const;
    void updateBreathableState(Actor &);
    bool canBreathe(Actor const&)const;
    bool canBreatheAir()const;
    bool canBreatheWater()const;
    bool canBreatheLava()const;
    bool canBreathSolids()const;
    bool generatesBubbles()const;
    void getBreathableState();
};