// RISC-V Extension Sanity Checks    -*- C -*-
// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Include checks for M-, A-, F-, D- and C-Extension. G-Extension is not here,
// rv{32,64}g*.c files should define HAS_M etc themselves.
//
// rv{32,64}*.c files should include this file, so they check they have defined
// and not defined all the right architectural definitions.

#include "ext-a.h"
#include "ext-c.h"
#include "ext-d.h"
#include "ext-f.h"
#include "ext-m.h"