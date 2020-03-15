#pragma once

#include "Amplifier.h"


class ShiftedValueAmplifier : public Amplifier {

public:
    ~ShiftedValueAmplifier(); // _ZN21ShiftedValueAmplifierD2Ev
    virtual void getAmount(int, float)const; // _ZNK21ShiftedValueAmplifier9getAmountEif
    ShiftedValueAmplifier(int, float); // _ZN21ShiftedValueAmplifierC2Eif
};
