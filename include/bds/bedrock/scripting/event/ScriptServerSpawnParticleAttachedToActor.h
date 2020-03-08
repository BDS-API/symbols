#pragma once

#include "../ScriptVersionInfo"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptServerContext"
#include "../unmapped/ScriptEngine"


class ScriptServerSpawnParticleAttachedToActor : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long mHash;

    virtual ScriptServerSpawnParticleAttachedToActor::~ScriptServerSpawnParticleAttachedToActor()
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    void getHash();
    ScriptServerSpawnParticleAttachedToActor(void);
};