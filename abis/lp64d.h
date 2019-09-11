// RISC-V 64-bit LP64D Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Based off LP64 Checks
#include "lp64.h"

// ABI-Specific Preprocessor Defines:
#ifdef __riscv_float_abi_soft
ERROR_DEFINE_PRESENT(__riscv_float_abi_soft);
#endif

#ifdef __riscv_float_abi_single
ERROR_DEFINE_PRESENT(__riscv_float_abi_single);
#endif

#ifndef __riscv_float_abi_double
ERROR_DEFINE_NOT_PRESENT(__riscv_float_abi_double);
#endif
