// Lightweight local replacement for non-standard <bits/stdc++.h>
// Aggregates commonly used C and C++ standard headers.
// Note: This is not the GCC libstdc++ header and omits <ext/...> headers.
#pragma once

// C headers
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

// C++ headers
#include <algorithm>
#include <array>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <forward_list>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <optional>
#include <ostream>
#include <queue>
#include <random>
#include <ratio>
#include <regex>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <variant>
#include <vector>

#if __cplusplus >= 201703L
#include <filesystem>
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#endif

