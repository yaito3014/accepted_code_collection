// URL: https://atcoder.jp/contests/abc126/submissions/18904271
// Date: Sun, 20 Dec 2020 06:00:47 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>

int main() {
  using i32 = int32_t;
  using u32 = uint32_t;
  using i64 = int64_t;
  using u64 = uint64_t;
  u32 n, k;
  std::cin >> n >> k;
  double ans = 0;
  for (u32 i = 1; i <= n; ++i) {
    double d = 1. / n;
    if (i < k) {
      u32 c = std::ceil(std::log2(k / double(i)));
      d /= (1u << c);
    }
    ans += d;
  }
  std::cout << std::fixed << std::setprecision(10) << ans << '\n';
}
