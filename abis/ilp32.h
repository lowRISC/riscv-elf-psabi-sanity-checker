// RISC-V 32-bit ILP32 Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <wchar.h>

// Defines CHECK_* Macros
#include "../utils.h"

// Checks for all ILP32* ABIs.

// Standard C Types: Implementation Defined Sizes & Alignments
CHECK_SIZE_ALIGN(_Bool, 1, 1);
CHECK_SIZE_ALIGN(char, 1, 1);
CHECK_SIZE_ALIGN(short, 2, 2);
CHECK_SIZE_ALIGN(int, 4, 4);
CHECK_SIZE_ALIGN(wchar_t, 4, 4);
CHECK_SIZE_ALIGN(wint_t, 4, 4);
CHECK_SIZE_ALIGN(long, 4, 4);
CHECK_SIZE_ALIGN(long long, 8, 8);
CHECK_SIZE_ALIGN(void *, 4, 4);
CHECK_SIZE_ALIGN(float, 4, 4);
CHECK_SIZE_ALIGN(double, 8, 8);
CHECK_SIZE_ALIGN(long double, 16, 16);

// Standard C Complex Types: Implementation Defined Sizes & Alignments
CHECK_SIZE_ALIGN(_Complex float, 8, 4);
CHECK_SIZE_ALIGN(_Complex double, 16, 8);
CHECK_SIZE_ALIGN(_Complex long double, 32, 16);

// Standard C Atomic Types: Implementation Defined Sizes & Alignment
CHECK_SIZE_ALIGN(_Atomic(_Bool), 1, 1);
CHECK_SIZE_ALIGN(_Atomic(char), 1, 1);
CHECK_SIZE_ALIGN(_Atomic(short), 2, 2);
CHECK_SIZE_ALIGN(_Atomic(int), 4, 4);
CHECK_SIZE_ALIGN(_Atomic(wchar_t), 4, 4);
CHECK_SIZE_ALIGN(_Atomic(wint_t), 4, 4);
CHECK_SIZE_ALIGN(_Atomic(long), 4, 4);
CHECK_SIZE_ALIGN(_Atomic(long long), 8, 8);
CHECK_SIZE_ALIGN(_Atomic(void *), 4, 4);
CHECK_SIZE_ALIGN(_Atomic(float), 4, 4);
CHECK_SIZE_ALIGN(_Atomic(double), 8, 8);
CHECK_SIZE_ALIGN(_Atomic(long double), 16, 16);

// Standard C Atomic Complex Types: Implementation Defined Sizes & Alignments
CHECK_SIZE_ALIGN(_Atomic(_Complex float), 8, 8);
CHECK_SIZE_ALIGN(_Atomic(_Complex double), 16, 16);
CHECK_SIZE_ALIGN(_Atomic(_Complex long double), 32, 16);

// Standard C Types: Implementation Defined Alignment
CHECK_EQ("_Alignof(max_align_t)", 16, _Alignof(max_align_t));

// Standard C Types: Implementation Defined Signedness
_Static_assert(CHAR_MIN == (char)0 && CHAR_MAX == UCHAR_MAX,
               "char should be an unsigned type");
_Static_assert(WCHAR_MIN < (wchar_t)0, "wchar_t should be a signed type");
_Static_assert(WINT_MIN == (wint_t)0, "wint_t should be an unsigned type");

// ABI-Specific Preprocessor Defines:
#ifndef __ELF__
ERROR_DEFINE_NOT_PRESENT(__ELF__);
#endif

#ifndef __riscv
ERROR_DEFINE_NOT_PRESENT(__riscv);
#endif

// Checks for ILP32 ABI Only
#if !defined(ilp32f) && !defined(ilp32d) && !defined(ilp32e)

// ABI-Specific Preprocessor Defines:
#  ifndef __riscv_float_abi_soft
ERROR_DEFINE_NOT_PRESENT(__riscv_float_abi_soft);
#  endif

#  ifdef __riscv_float_abi_single
ERROR_DEFINE_PRESENT(__riscv_float_abi_float);
#  endif

#  ifdef __riscv_float_abi_double
ERROR_DEFINE_PRESENT(__riscv_float_abi_double);
#  endif

#  ifdef __riscv_abi_rve
ERROR_DEFINE_PRESENT(__riscv_abi_rve);
#  endif

#endif
