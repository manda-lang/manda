// Copyright (c) 2019, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// license that can be found in the LICENSE file.
#include <manda/bytecode/bytecode.hpp>

uint8_t manda::bytecode::PushErrorInstruction::getOpcode() const
{
    return 0x1b;
}

void manda::bytecode::PushErrorInstruction::accept(manda::bytecode::BytecodeVisitor &visitor)
{
    visitor.visitPushErrorInstruction(*this);
}        
        