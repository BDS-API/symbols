#pragma once

#include "ButtonBlock.h"
#include <string>


class WoodButtonBlock : public ButtonBlock {

public:
    ~WoodButtonBlock(); // _ZN15WoodButtonBlockD2Ev
    WoodButtonBlock(std::string const&, int); // _ZN15WoodButtonBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
