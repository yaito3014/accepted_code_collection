// URL: https://atcoder.jp/contests/pakencamp-2020-day1/submissions/19227071
// Date: Wed, 06 Jan 2021 02:38:32 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <tuple>
#include <vector>
#include <bitset>
int main() {
  using u32 = int_fast32_t;
  u32 n, m;
  std::cin >> n >> m;
  std::vector<std::tuple<u32, u32, u32>> lrx(m);
  for (auto& [l, r, x] : lrx) std::cin >> l >> r >> x, --l, --r;
  const u32 kMax = 1 << n;
  bool invalid = true;
  u32 ans = 0;
  for (int i = 0; i < kMax; ++i) {
    bool check = true;
    for (const auto& [l, r, x] : lrx) {
      u32 cnt = 0;
      for (int j = l; j <= r; ++j)
        if ((i >> j) & 1) ++cnt;
      if (cnt == x) continue;
      check = false;
      break;
    }
    if (!check) continue;
    u32 c = 0;
    for (u32 j = 0; j < n; ++j)
      if ((i >> j) & 1) ++c;
    ans = std::max(ans, c);
    invalid = false;
  }
  if (invalid) std::cout << -1 << '\n';
  else std::cout << ans << '\n';
}
