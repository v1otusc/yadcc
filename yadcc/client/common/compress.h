// Copyright (C) 2021 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this
// file except in compliance with the License. You may obtain a copy of the
// License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

#ifndef YADCC_CLIENT_COMMON_COMPRESS_H_
#define YADCC_CLIENT_COMMON_COMPRESS_H_

#include <string>
#include <string_view>

namespace yadcc::client {

// Compress bytes in `from` using zstd algorithm.
std::string CompressUsingZstd(const std::string_view& from);

// Decompress bytes in `from` using zstd algorithm.
std::string DecompressUsingZstd(const std::string_view& from);

}  // namespace yadcc::client

#endif  // YADCC_CLIENT_COMMON_COMPRESS_H_
