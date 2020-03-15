#pragma once

#include <string>
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "Packet.h"


class MobEffectPacket : public Packet {

public:
    ~MobEffectPacket(); // _ZN15MobEffectPacketD2Ev
    virtual void getId()const; // _ZNK15MobEffectPacket5getIdEv
    virtual std::string getName()const; // _ZNK15MobEffectPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15MobEffectPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15MobEffectPacket4readER20ReadOnlyBinaryStream
    MobEffectPacket(); // _ZN15MobEffectPacketC2Ev
//  MobEffectPacket(ActorRuntimeID, MobEffectPacket::Event, int, int, int, bool); //TODO: incomplete function definition // _ZN15MobEffectPacketC2E14ActorRuntimeIDNS_5EventEiiib
};
