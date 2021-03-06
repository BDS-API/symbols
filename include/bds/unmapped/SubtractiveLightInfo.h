#pragma once

#include "../bedrock/util/Brightness.h"
#include "../bedrock/level/chunk/SubChunkLightIndex.h"


class SubtractiveLightInfo {

public:
    SubtractiveLightInfo(); // _ZN20SubtractiveLightInfoC2Ev
    SubtractiveLightInfo(SubChunkLightIndex, Brightness); // _ZN20SubtractiveLightInfoC2E18SubChunkLightIndex10Brightness
    SubtractiveLightInfo(SubtractiveLightInfo const&); // _ZN20SubtractiveLightInfoC2ERKS_
    void operator<(SubtractiveLightInfo const&); // _ZN20SubtractiveLightInfoltERKS_
};
