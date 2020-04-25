//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
// Copyright (c) 2016-20, Lawrence Livermore National Security, LLC
// and RAJA project contributors. See the RAJA/COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

///
/// Source file containing tests for RAJA util intro_sort for cuda gpus
///

#include "test-sort.hpp"

#if defined(RAJA_ENABLE_CUDA)

GPU_TEST(Sort, intro_Sort_cuda)
{
  RAJA::Index_type MaxN = 1000; // limit MaxN to decrease runtime
  testSorter(IntroSortGPU<forone_cuda>{}, MaxN);
  testSorter(IntroSortPairsGPU<forone_cuda>{}, MaxN);
}

#endif

