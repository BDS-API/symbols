#pragma once

#include <functional>
#include <memory>


class ScheduledCallback {

public:
    ScheduledCallback(long, std::weak_ptr<bool>, std::function<void (void)>); // _ZN17ScheduledCallbackC2ElSt8weak_ptrIbESt8functionIFvvEE
    ~ScheduledCallback(); // _ZN17ScheduledCallbackD2Ev
    ScheduledCallback(ScheduledCallback const&); // _ZN17ScheduledCallbackC2ERKS_
};
