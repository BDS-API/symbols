#pragma once

#include "../OceanMonumentPiece.h"
#include <memory>


class OceanMonumentDoubleZRoom : public OceanMonumentPiece {

public:
    ~OceanMonumentDoubleZRoom(); // _ZN24OceanMonumentDoubleZRoomD2Ev
    virtual void getType()const; // _ZNK24OceanMonumentDoubleZRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN24OceanMonumentDoubleZRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentDoubleZRoom(); // _ZN24OceanMonumentDoubleZRoomC2Ev
    OceanMonumentDoubleZRoom(int &, std::shared_ptr<RoomDefinition> &); // _ZN24OceanMonumentDoubleZRoomC2ERiRSt10shared_ptrI14RoomDefinitionE
};
