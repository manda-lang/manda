// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by an
// MIT-style license that can be found in the LICENSE file.
#ifndef PROJECT_JITINTERPRETER_H
#define PROJECT_JITINTERPRETER_H

#include <jit/jit.h>
#include <stack>
#include "../analysis/analysis.h"
#include "../parser/parser.h"

namespace manda
{
    class JITInterpreter : public MandaBaseVisitor
    {
    public:
        explicit JITInterpreter(MandaAnalyzer &analyzer);

        ~JITInterpreter();

        jit_function_t GetMainFunction() const;

        int GetExitCode() const;

        jit_float64 GetResult() const;

        void Run();

        Any visitReturnStmt(MandaParser::ReturnStmtContext *ctx) override;

    private:
        MandaAnalyzer &analyzer;
        std::stack<jit_function_t> functionStack;
        jit_function_t mainFunction;
        jit_context_t ctx;
        jit_float64 result;
    };
}

#endif //PROJECT_JITINTERPRETER_H
