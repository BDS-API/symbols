#ifndef BDS_SYMBOLS_PACKET_H
#define BDS_SYMBOLS_PACKET_H

#include "../Compressibility.h"

class Packet {

public:
    Packet();

    Packet(Packet const &);

    Packet(Compressibility);

    ~Packet();

    bool *disallowBatching() const;

    unsigned char *getClientSubId() const;

    void setClientSubId(unsigned char *);

    unsigned int *getCompressible() const;

    unsigned int *getReliability() const;

    void setReliable();

    void setReliableOrdered();

    Packet *operator=(Packet const &);

};

#endif //BDS_SYMBOLS_PACKET_H
