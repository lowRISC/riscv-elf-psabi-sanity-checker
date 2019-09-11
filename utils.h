// RISC-V Sanity Check Helpers     -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// These macros are for compile-time sanity checks

// Check sizeof(type) == size, _Alignof(type) == align
#define CHECK_SIZE_ALIGN(type, size, align)                                    \
  CHECK_EQ("sizeof(" #type ")", size, sizeof(type));                           \
  CHECK_EQ("_Alignof(" #type ")", align, _Alignof(type));

#define CHECK_DEFINED_EQ(name, value)                                          \
  CHECK_EQ(#name " (preprocessor define)", value, name);

// Check expected == actual, including expr_str in error message
#define CHECK_EQ(expr_str, expected, actual)                                   \
  _Static_assert((expected) == (actual), expr_str " should be " #expected);
