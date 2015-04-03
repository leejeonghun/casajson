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

#include "CppUnitTest.h"  // NOLINT
#include "casajson/casajson.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;  // NOLINT

namespace testbench {

TEST_CLASS(unittest) {
 public:
  const wchar_t *sample_json = L"{\"key1\":false,\"key2\":44,\"key3\":\"str\"}";

  TEST_METHOD(parse) {
    json::value obj = json::value::parse(sample_json);
    Assert::AreEqual(false, obj[L"key1"].as_bool());
    Assert::AreEqual(44, obj[L"key2"].as_integer());
    Assert::AreEqual(L"str", obj[L"key3"].as_string().c_str());
  }

  TEST_METHOD(serialize) {
    json::value obj;
    obj[L"key1"] = json::value::boolean(false);
    obj[L"key2"] = json::value::number(44);
    obj[L"key3"] = json::value::string(L"str");
    Assert::AreEqual(sample_json, obj.serialize().c_str());
  }
};

}  // namespace testbench
