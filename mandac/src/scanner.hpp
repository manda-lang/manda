// Copyright (c) 2019, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// license that can be found in the LICENSE file.
#ifndef MANDA_SCANNER_HPP
#define MANDA_SCANNER_HPP

#include <vector>
#include "token.hpp"

namespace mandac
{
    class Scanner
    {
    public:
        void add(TokenType::Enum type, std::string text);

        void addError(char ch);

        void newline();

        void whitespace();
    };
}

#endif //MANDA_SCANNER_HPP
