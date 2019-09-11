// RISC-V 32-bit ILP32F Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Based off ILP32 Checks
#include "ilp32.h"

// ABI-Specific Preprocessor Defines:
#ifdef __riscv_float_abi_soft
ERROR_DEFINE_PRESENT(__riscv_float_abi_soft);
#endif

#ifndef __riscv_float_abi_single
ERROR_DEFINE_NOT_PRESENT(__riscv_float_abi_single);
#endif

#ifdef __riscv_float_abi_double
ERROR_DEFINE_PRESENT(__riscv_float_abi_double);
#endif

#ifdef __riscv_abi_rve
ERROR_DEFINE_PRESENT(__riscv_abi_rve);
#endif
