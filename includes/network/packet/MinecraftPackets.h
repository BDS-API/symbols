#ifndef BDS_SYMBOLS_MINECRAFTPACKETS_H
#define BDS_SYMBOLS_MINECRAFTPACKETS_H

#include <memory>
#include "Packet.h"

class MinecraftPackets {
public:
    static std::unique_ptr <Packet> createPacket(int);
};

#endif //BDS_SYMBOLS_MINECRAFTPACKETS_H
