#pragma once

#include "ContainerController.h"
#include <memory>


class LabTableInputContainerController : public ContainerController {

public:
    ~LabTableInputContainerController(); // _ZN32LabTableInputContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK32LabTableInputContainerController13isItemAllowedERK12ItemInstance
    LabTableInputContainerController(std::shared_ptr<ContainerModel>); // _ZN32LabTableInputContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
