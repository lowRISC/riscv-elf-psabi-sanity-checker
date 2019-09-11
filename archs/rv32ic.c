// RISC-V rv32ic Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "utils.h"

// Architecture-Specific Preprocessor Definitions:
CHECK_DEFINED_EQ(__riscv_xlen, 32);

#define HAS_M 0
#define HAS_A 0
#define HAS_F 0
#define HAS_D 0
#define HAS_C 1

#include "check-exts.h"