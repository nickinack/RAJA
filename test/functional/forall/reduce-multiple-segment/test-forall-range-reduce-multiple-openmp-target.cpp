//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
// Copyright (c) 2016-20, Lawrence Livermore National Security, LLC
// and RAJA project contributors. See the RAJA/COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

#include "tests/test-forall-range-reduce-multiple.hpp"

#if defined(RAJA_ENABLE_TARGET_OPENMP)

#include "../test-forall-execpol.hpp"
#include "../test-reducepol.hpp"

// Cartesian product of types for OpenMP target tests
using OpenMPTargetForallRangeReduceMultipleTypes =
  Test< camp::cartesian_product<ReduceMultipleDataTypeList, 
                                OpenMPTargetResourceList, 
                                OpenMPTargetForallExecPols,
                                OpenMPTargetReducePols>>::Types;

INSTANTIATE_TYPED_TEST_SUITE_P(OpenMPTarget,
                               ForallRangeReduceMultipleTest,
                               OpenMPTargetForallRangeReduceMultipleTypes);

#endif
