#pragma once

#include "ChemistryAuxDataBlockItem.h"


class ElementBlockItem : public ChemistryAuxDataBlockItem {

public:
    ~ElementBlockItem(); // _ZN16ElementBlockItemD2Ev
    virtual void fixupOnLoad(ItemStackBase &)const; // _ZNK16ElementBlockItem11fixupOnLoadER13ItemStackBase
};
