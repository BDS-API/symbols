#pragma once

#include "MonumentRoomFitter.h"
#include <memory>


class FitDoubleYRoom : public MonumentRoomFitter {

public:
    ~FitDoubleYRoom(); // _ZN14FitDoubleYRoomD2Ev
    virtual void fits(std::shared_ptr<RoomDefinition> &); // _ZN14FitDoubleYRoom4fitsERSt10shared_ptrI14RoomDefinitionE
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &); // _ZN14FitDoubleYRoom6createERiRSt10shared_ptrI14RoomDefinitionER6Random
    FitDoubleYRoom(); // _ZN14FitDoubleYRoomC2Ev
};
