//
// SPDX-License-Identifier: LGPL-2.1-or-later
//
// Copyright � 2019 ANSSI. All Rights Reserved.
//
// Author(s): fabienfl
//

#pragma once

#pragma managed(push, off)

#include <string>
#include <system_error>

namespace Orc {

// ExpandEnvironmentStringsW wrapper with custom maximum buffer size
std::wstring ExpandEnvironmentStringsApi(const wchar_t* szEnvString, size_t cbMaxOutput, std::error_code& ec) noexcept;

// ExpandEnvironmentStringsW wrapper with default maximum buffer size of MAX_PATH
std::wstring ExpandEnvironmentStringsApi(const wchar_t* szEnvString, std::error_code& ec) noexcept;

// GetCurrentDirectoryW wrapper with custom maximum buffer size
// WARNING: this function is not thread safe
std::wstring GetWorkingDirectoryApi(size_t cbMaxOutput, std::error_code& ec) noexcept;

// GetCurrentDirectoryW wrapper with default maximum buffer size of MAX_PATH
// WARNING: this function is not thread safe
std::wstring GetWorkingDirectoryApi(std::error_code& ec) noexcept;

}  // namespace Orc

#pragma managed(pop)
