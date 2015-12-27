// Copyright 2015 MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <mongocxx/config/prelude.hpp>

#include <system_error>

namespace mongocxx {
MONGOCXX_INLINE_NAMESPACE_BEGIN

enum class error_code : std::int32_t {
    k_invalid_client_object = 1,
    k_invalid_collection_object,
    k_invalid_database_object,
    k_invalid_parameter,
    k_ssl_not_supported,
    k_unknown_read_concern,
    k_unknown_write_concern,
};

MONGOCXX_INLINE_NAMESPACE_END
}  // namespace mongocxx

#include <mongocxx/config/postlude.hpp>
