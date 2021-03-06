#pragma once

#include "ContainerController.h"
#include <memory>


class GrindstoneContainerController : public ContainerController {

public:
    ~GrindstoneContainerController(); // _ZN29GrindstoneContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK29GrindstoneContainerController13isItemAllowedERK12ItemInstance
    GrindstoneContainerController(std::shared_ptr<ContainerModel>); // _ZN29GrindstoneContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
