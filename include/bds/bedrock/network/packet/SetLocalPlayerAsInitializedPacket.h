#pragma once

#include <string>
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "Packet.h"


class SetLocalPlayerAsInitializedPacket : public Packet {

public:
    ~SetLocalPlayerAsInitializedPacket(); // _ZN33SetLocalPlayerAsInitializedPacketD2Ev
    virtual void getId()const; // _ZNK33SetLocalPlayerAsInitializedPacket5getIdEv
    virtual std::string getName()const; // _ZNK33SetLocalPlayerAsInitializedPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK33SetLocalPlayerAsInitializedPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN33SetLocalPlayerAsInitializedPacket4readER20ReadOnlyBinaryStream
    SetLocalPlayerAsInitializedPacket(); // _ZN33SetLocalPlayerAsInitializedPacketC2Ev
    SetLocalPlayerAsInitializedPacket(ActorRuntimeID); // _ZN33SetLocalPlayerAsInitializedPacketC2E14ActorRuntimeID
};
