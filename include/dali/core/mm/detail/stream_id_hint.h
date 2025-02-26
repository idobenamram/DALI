// Copyright (c) 2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef DALI_CORE_MM_DETAIL_STREAM_ID_HINT_H_
#define DALI_CORE_MM_DETAIL_STREAM_ID_HINT_H_

#include <cuda.h>
#include "dali/core/api_helper.h"

namespace dali {

struct stream_id_hint {
  DLL_PUBLIC static bool is_unambiguous();
  DLL_PUBLIC static uint64_t from_handle(CUstream handle);
};

}  // namespace dali

#endif  // DALI_CORE_MM_DETAIL_STREAM_ID_HINT_H_
