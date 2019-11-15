#ifndef BDS_SYMBOLS_SERVERPLAYER_H
#define BDS_SYMBOLS_SERVERPLAYER_H

#include "Player.h"
#include <vector>

class ServerPlayer : public Player {

public:
    void displayLocalizableMessage(const std::string &, const std::vector <std::string> &);

};

#endif //BDS_SYMBOLS_SERVERPLAYER_H
