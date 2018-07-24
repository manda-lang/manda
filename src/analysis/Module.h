// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by an
// MIT-style license that can be found in the LICENSE file.
#ifndef MANDA_MODULE_H
#define MANDA_MODULE_H

#include <vector>
#include "../runtime/SymbolTable.h"
#include "Function.h"
#include "Object.h"

namespace manda
{
    class Module
    {
    public:
        explicit Module(SymbolTable<Object *> *scope);

        ~Module();

        std::vector<Function *> &GetFunctions();

        /**
         * The "implicit function" refers to the top-level statements that are executed when this module is imported.
         * @return
         */
        Function *GetImplicitFunction();

        void SetImplicitFunction(Function *function);

        SymbolTable<Object *> *GetScope();

    private:
        std::vector<Function *> functions;
        Function *implicitFunction;
        SymbolTable<Object *> *scope;
    };
}

#endif //MANDA_MODULE_H
