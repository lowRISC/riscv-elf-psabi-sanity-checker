// RISC-V F Extension Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "utils.h"

#ifndef HAS_F
#  define HAS_F 0
#endif

#if HAS_F

#  ifndef __riscv_fdiv
ERROR_DEFINE_NOT_PRESENT(__riscv_fdiv);
#  endif

#  ifndef __riscv_fsqrt
ERROR_DEFINE_NOT_PRESENT(__riscv_fsqrt);
#  endif

#else

#  ifdef __riscv_fdiv
ERROR_DEFINE_NOT_PRESENT(__riscv_fdiv);
#  endif

#  ifdef __riscv_fsqrt
ERROR_DEFINE_NOT_PRESENT(__riscv_fsqrt);
#  endif

#endif