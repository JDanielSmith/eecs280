// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
#pragma warning(push)
#pragma warning(disable: 4619) // #pragma warning: there is no warning number '...'
#pragma warning(disable: 4668) // '...' is not defined as a preprocessor macro, replacing with '...' for '...'
#pragma warning(disable: 5262) // implicit fall-through occurs here; are you missing a break statement? Use [[fallthrough]] when a break statement is intentionally omitted between cases
#pragma warning(disable: 5264) // '...': '...' variable is not used

#include <limits.h>

#pragma warning(disable: 4996) // '...': warning STL4036: <ciso646> is removed in C++20. You can define _SILENCE_CXX20_CISO646_REMOVED_WARNING or _SILENCE_ALL_CXX20_DEPRECATION_WARNINGS to acknowledge that you have received this warning.
#include <ciso646>
#include <iostream>
#include <cassert>
#include <iostream>
#include <array>
#include <stdexcept>
#include <set>
#include <algorithm>
#include <vector>
#include <optional>

#pragma warning(pop)

#pragma warning(disable: 4464) // relative include path contains '..'

#include "Card.h"
#include "Pack.h"
#include "Player.h"

#pragma warning(disable: 5045) // Compiler will insert Spectre mitigation for memory load if /Qspectre switch specified
#pragma warning(disable: 4820) // '...': '...' bytes padding added after data member '...'
#pragma warning(disable: 4514) // '...': unreferenced inline function has been removed
#pragma warning(disable: 5039) // '...': pointer or reference to potentially throwing function passed to '...' function under -EHc. Undefined behavior may occur if this function throws an exception. 

//#pragma warning(disable: G66D0AA52) // '...' specifier is incompatible with C++98 [clang-diagnostic-c++98-compat]

#endif //PCH_H