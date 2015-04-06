// Copyright 2014 jeonghun
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CASAJSON_PRECOMPILE_H_
#define CASAJSON_PRECOMPILE_H_

#ifndef NTDDI_VERSION
#define NTDDI_VERSION 0x05010000
#endif  // NTDDI_VERSION

#ifndef _WIN32_WINNT
#define _WIN32_WINNT  0x0501
#endif  // _WIN32_WINNT

#include <winsdkver.h>
#include <sdkddkver.h>
#include "casajson.h"  // NOLINT
#include "pch/stdafx.h"

#endif  // CASAJSON_PRECOMPILE_H_
