// URL: https://atcoder.jp/contests/abc194/submissions/20697741
// Date: Sat, 06 Mar 2021 12:10:49 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cstdint>
#include <numeric>
#include <iostream>
#include <limits>
#include <utility>
#include <vector>

int main() {
  std::cin.tie(nullptr);
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  using i32 = int_fast32_t;
  using i64 = int_fast64_t;
  u32 n;
  std::cin >> n;
  std::vector<u32> a(n), b(n);
  for (u32 i = 0; i < n; ++i)
    std::cin >> a[i] >> b[i];
  u32 ans = std::numeric_limits<u32>::max();
  for (u32 i = 0; i < n; ++i)
    for (u32 j = 0; j < n; ++j)
      ans = std::min(ans, i == j ? a[i] + b[j] : std::max(a[i], b[j]));
  std::cout << ans << '\n';
}
