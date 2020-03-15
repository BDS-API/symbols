#pragma once

#include "../../unmapped/IWebviewTelemetry.h"
#include "../../unmapped/IPackTelemetry.h"


class IMinecraftEventing : public IPackTelemetry, public IWebviewTelemetry {

public:
    ~IMinecraftEventing(); // _ZN18IMinecraftEventingD2Ev
    IMinecraftEventing(); // _ZN18IMinecraftEventingC2Ev
};
