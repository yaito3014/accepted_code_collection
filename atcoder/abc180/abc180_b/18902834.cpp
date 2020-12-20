// URL: https://atcoder.jp/contests/abc180/submissions/18902834
// Date: Sun, 20 Dec 2020 04:29:12 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <numeric>
#include <vector>

int main() {
  using i32 = int32_t;
  using u32 = uint32_t;
  using i64 = int64_t;
  using u64 = uint64_t;
  u32 n;
  std::cin >> n;
  std::vector<i64> x(n);
  for (auto& e : x) std::cin >> e;
  u64 ma = 0;
  for (const auto& e : x) ma += std::abs(e);
  std::cout << ma << '\n';
  u64 eu = 0;
  for (const auto& e : x) eu += e * e;
  std::cout << std::fixed << std::setprecision(11) << std::sqrt(eu) << '\n';
  u64 ch = 0;
  for (const auto& e : x) ch = std::max<u64>(ch, std::abs(e));
  std::cout << ch << '\n';
}
