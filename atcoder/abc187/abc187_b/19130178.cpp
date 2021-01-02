// URL: https://atcoder.jp/contests/abc187/submissions/19130178
// Date: Sat, 02 Jan 2021 12:15:45 +0000
// Language: C++ (GCC 9.2.1)
#include <cmath>
#include <cstdint>
#include <iostream>
#include <utility>
#include <vector>

int main() {
  using u32 = uint_fast32_t;
  using i32 = int_fast32_t;
  u32 n;
  std::cin >> n;
  std::vector<std::pair<i32, i32>> ps(n);
  for (auto& [x, y] : ps) std::cin >> x >> y;
  u32 ans = 0;
  for (u32 i = 0; i < n; ++i) {
    for (u32 j = i + 1; j < n; ++j) {
      u32 dx = std::abs(ps[i].first - ps[j].first);
      u32 dy = std::abs(ps[i].second - ps[j].second);
      if (dx >= dy) ++ans;
    }
  }
  std::cout << ans << '\n';
}
