// URL: https://atcoder.jp/contests/abc130/submissions/18903701
// Date: Sun, 20 Dec 2020 05:26:49 +0000
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
  u32 n, x;
  std::cin >> n >> x;
  u32 s = 0, ans = 1;
  for (u32 i = 0; i < n; ++i) {
    u32 l;
    std::cin >> l;
    s += l;
    if (s <= x) ++ans;
  }
  std::cout << ans << '\n';
}
