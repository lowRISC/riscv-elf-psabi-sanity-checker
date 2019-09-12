// RISC-V C Extension Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "utils.h"

#ifndef HAS_C
#  define HAS_C 0
#endif

#if HAS_C

#  ifndef __riscv_compressed
ERROR_DEFINE_NOT_PRESENT(__riscv_compressed);
#  endif

#else

#  ifdef __riscv_compressed
ERROR_DEFINE_NOT_PRESENT(__riscv_compressed);
#  endif

#endif