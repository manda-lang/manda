// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by an
// MIT-style license that can be found in the LICENSE file.
#ifndef MANDA_TOKEN_H
#define MANDA_TOKEN_H

#include <string>
#include "SourceSpan.h"

namespace manda
{
    class Token
    {
    public:
        enum TokenType
        {
            // Keywords
                    LET,

            // Operators
                    EQUALS,
            TIMES,
            DIV,
            MODULO,
            PLUS,
            MINUS,

            // Expressions
                    FLOAT,
            DECIMAL,
            BINARY,
            HEX,
            OCTAL,
            ID
        };

        explicit Token(TokenType type, const SourceSpan *span);

        ~Token();

        const SourceSpan *GetSourceSpan() const;

        TokenType GetType() const;

        bool HasMatch() const;

        const std::string &GetMatch() const;

        void SetMatch(std::string &match);

    private:
        bool hasMatch;
        std::string match;
        TokenType type;
        const SourceSpan *sourceSpan;
    };
}

#endif //MANDA_TOKEN_H
