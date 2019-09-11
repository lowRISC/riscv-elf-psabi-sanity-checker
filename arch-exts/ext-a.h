// RISC-V A Extension Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "utils.h"

#ifndef HAS_A
#  define HAS_A 0
#endif

#if HAS_A

#  ifndef __riscv_atomic
ERROR_DEFINE_NOT_PRESENT(__riscv_atomic);
#  endif

#else

#  ifdef __riscv_atomic
ERROR_DEFINE_NOT_PRESENT(__riscv_atomic);
#  endif

#endif