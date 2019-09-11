// RISC-V M Extension Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef HAS_M
#  define HAS_M 0
#endif

#if HAS_M

#  ifndef __riscv_mul
ERROR_DEFINE_NOT_PRESENT(__riscv_mul);
#  endif

#  ifndef __riscv_div
ERROR_DEFINE_NOT_PRESENT(__riscv_div);
#  endif

#  ifndef __riscv_muldiv
ERROR_DEFINE_NOT_PRESENT(__riscv_muldiv);
#  endif

#else

#  ifdef __riscv_mul
ERROR_DEFINE_NOT_PRESENT(__riscv_mul);
#  endif

#  ifdef __riscv_div
ERROR_DEFINE_NOT_PRESENT(__riscv_div);
#  endif

#  ifdef __riscv_muldiv
ERROR_DEFINE_NOT_PRESENT(__riscv_muldiv);
#  endif

#endif