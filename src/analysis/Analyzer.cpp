// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by an
// MIT-style license that can be found in the LICENSE file.
#include "Analyzer.h"

using namespace manda;

manda::Analyzer::Analyzer() {
    globalScope = new SymbolTable<Object *>;
}

manda::Analyzer::~Analyzer() {
    delete globalScope;
}

manda::Program *manda::Analyzer::VisitCompilationUnit(manda::CompilationUnitNode *ctx) {
    auto *program = new Program;

    // TODO: Actual names for modules
    auto *module = VisitSingleCompilationUnit(ctx);
    std::string name("Main");
    program->GetModules().insert(std::make_pair(name, module));
    program->SetMainModule(module);

    return program;
}

manda::Module *manda::Analyzer::VisitSingleCompilationUnit(manda::CompilationUnitNode *ctx) {
    return nullptr;
}
