// Copyright (c) 2020, the Dart project authors.  Please see the AUTHORS file
// for details. All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.

#ifndef RUNTIME_VM_COMPILER_FFI_CALL_H_
#define RUNTIME_VM_COMPILER_FFI_CALL_H_

#if defined(DART_PRECOMPILED_RUNTIME)
#error "AOT runtime should not use compiler sources (including header files)"
#endif  // defined(DART_PRECOMPILED_RUNTIME)

#include <platform/globals.h>

#include "vm/raw_object.h"

namespace dart {

namespace compiler {

namespace ffi {

FunctionPtr TrampolineFunction(const FunctionType& dart_signature,
                               const FunctionType& c_signature,
                               bool is_leaf,
                               const String& function_name);

}  // namespace ffi

}  // namespace compiler

}  // namespace dart

#endif  // RUNTIME_VM_COMPILER_FFI_CALL_H_
