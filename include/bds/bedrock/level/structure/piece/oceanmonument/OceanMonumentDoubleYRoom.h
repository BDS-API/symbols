#pragma once

#include "../OceanMonumentPiece.h"
#include <memory>


class OceanMonumentDoubleYRoom : public OceanMonumentPiece {

public:
    ~OceanMonumentDoubleYRoom(); // _ZN24OceanMonumentDoubleYRoomD2Ev
    virtual void getType()const; // _ZNK24OceanMonumentDoubleYRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN24OceanMonumentDoubleYRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentDoubleYRoom(); // _ZN24OceanMonumentDoubleYRoomC2Ev
    OceanMonumentDoubleYRoom(int &, std::shared_ptr<RoomDefinition> &); // _ZN24OceanMonumentDoubleYRoomC2ERiRSt10shared_ptrI14RoomDefinitionE
};
