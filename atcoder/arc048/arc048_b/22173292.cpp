// URL: https://atcoder.jp/contests/arc048/submissions/22173292
// Date: Fri, 30 Apr 2021 11:36:05 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <utility>
#include <vector>

int main() {
  using u32 = uint32_t;
  using P = std ::pair<u32, u32>;
  u32 n;
  std::cin >> n;
  std::vector<P> rh(n);
  for (auto& [r, h] : rh) std::cin >> r >> h;
  auto cp = rh;
  std::sort(cp.begin(), cp.end());
  for (const auto& [r, h] : rh) {
    u32 win = std::distance(cp.cbegin(),
                            std::lower_bound(cp.cbegin(), cp.cend(), P(r, 1)));
    {
      auto [f, l] = std::equal_range(cp.cbegin(), cp.cend(), P(r, h % 3 + 1));
      win += std::distance(f, l);
    }
    u32 loose = std::distance(std::upper_bound(cp.cbegin(), cp.cend(), P(r, 3)),
                              cp.cend());
    {
      auto [f, l] =
          std::equal_range(cp.cbegin(), cp.cend(), P(r, (h + 1) % 3 + 1));
      loose += std::distance(f, l);
    }
    u32 draw = n - 1 - win - loose;
    std::cout << win << ' ' << loose << ' ' << draw << '\n';
  }
}
