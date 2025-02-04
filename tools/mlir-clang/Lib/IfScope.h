//===---- IfScope.h - Create an if statement to guard loop boundaries  ----===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
#ifndef IF_SCOPE_H_
#define IF_SCOPE_H_

#include "mlir/IR/Builders.h"

class MLIRScanner;

class IfScope {
public:
  MLIRScanner &scanner;
  mlir::Block *prevBlock;
  mlir::Block::iterator prevIterator;
  IfScope(MLIRScanner &scanner);
  ~IfScope();
};

#endif
