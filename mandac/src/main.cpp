// Copyright (c) 2019, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// license that can be found in the LICENSE file.
#include <iostream>
#include "scanner.hpp"
#include "parser.hpp"

int main()
{
    mandac::Scanner scanner("stdin");
    scanner.scan(stdin);

    mandac::Parser parser(scanner.getTokens());

    return 0;
}