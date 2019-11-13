#ifndef BDSAPI_SYMBOLS_SERVERPLAYER_H
#define BDSAPI_SYMBOLS_SERVERPLAYER_H

#include "Player.h"
#include <vector>

class ServerPlayer : Player {

public:
    void displayLocalizableMessage(const std::string &, const std::vector <std::string> &);

    void addLevels(unsigned int);

};

#endif //BDSAPI_SYMBOLS_SERVERPLAYER_H
