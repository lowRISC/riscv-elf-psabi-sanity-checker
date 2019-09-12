// RISC-V Sanity Check Helpers     -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#pragma once

// These macros are for compile-time sanity checks

// Check sizeof(type) == size, _Alignof(type) == align
#define CHECK_SIZE_ALIGN(type, size, align)                                    \
  CHECK_EQ("sizeof(" #type ")", size, sizeof(type));                           \
  CHECK_EQ("_Alignof(" #type ")", align, _Alignof(type))

#define CHECK_DEFINED_EQ(name, value)                                          \
  CHECK_EQ(#name " (preprocessor define)", value, name)

// Check expected == actual, including expr_str in error message
#define CHECK_EQ(expr_str, expected, actual)                                   \
  _Static_assert((expected) == (actual), expr_str " should be " #expected)

// Preprocessor Definition checks must be done with #ifdef/#ifndef but we use
// these macros to cut down on repetition in error messages.
#define ERROR_DEFINE_NOT_PRESENT(define)                                       \
  _Static_assert(0, #define " (preprocessor define) is not defined")
#define ERROR_DEFINE_PRESENT(define)                                           \
  _Static_assert(0, #define                                                    \
                 " (preprocessor define) is defined and should not be")
