//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
// Copyright (c) 2016-20, Lawrence Livermore National Security, LLC
// and RAJA project contributors. See the RAJA/COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

#include "test-scan.hpp"

#if defined(RAJA_ENABLE_HIP)

using HipInclusiveScanTypes = 
  Test< camp::cartesian_product< HipForallExecPols,
                                 HipResourceList, 
                                 ScanOpTypes >>::Types;

INSTANTIATE_TYPED_TEST_SUITE_P(Hip, 
                               ScanFunctionalTest, 
                               HipInclusiveScanTypes);

#endif
