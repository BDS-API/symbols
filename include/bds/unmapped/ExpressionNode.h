#pragma once

#include <vector>
#include <unordered_map>
#include "MolangScriptArg.h"
#include <string>
#include <functional>


class ExpressionNode {

public:
    static long mQueryFunctionAccessors;
    static long mGenericQueryFunctionAccessors;
    static long _defaultUnknownQueryFunction;
    static long _defaultUnknownGenericQueryFunction;
    static long mTemporaryMolangEvalParams;
    static long mMolangInitialized;
    static std::string mExpressionOpTokens;

};
