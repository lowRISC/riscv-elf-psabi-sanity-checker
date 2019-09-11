// RISC-V D Extension Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef HAS_D
#  define HAS_D 0
#endif

#if HAS_D

#  ifndef __riscv_fdiv
ERROR_DEFINE_NOT_PRESENT(__riscv_fdiv);
#  endif

#  ifndef __riscv_fsqrt
ERROR_DEFINE_NOT_PRESENT(__riscv_fsqrt);
#  endif

#else

// __riscv_fdiv and __riscv_fsqrt should be present if HAS_F, so we cannot check
// for their absence here. In any case, the D extension requires the F
// extension, so this is not a problem.

#endif