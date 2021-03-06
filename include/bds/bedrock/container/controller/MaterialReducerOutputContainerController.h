#pragma once

#include "ContainerController.h"
#include <memory>


class MaterialReducerOutputContainerController : public ContainerController {

public:
    ~MaterialReducerOutputContainerController(); // _ZN40MaterialReducerOutputContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK40MaterialReducerOutputContainerController13isItemAllowedERK12ItemInstance
    MaterialReducerOutputContainerController(std::shared_ptr<ContainerModel>); // _ZN40MaterialReducerOutputContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
