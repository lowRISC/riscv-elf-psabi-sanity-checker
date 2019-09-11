// RISC-V rv64imafdc Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "utils.h"

// Architecture-Specific Preprocessor Definitions:
CHECK_DEFINED_EQ(__riscv_xlen, 64);
CHECK_DEFINED_EQ(__riscv_flen, 64);
