// URL: https://atcoder.jp/contests/abc186/submissions/18879945
// Date: Sat, 19 Dec 2020 12:36:46 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  using u32 = uint_fast32_t;
  u32 h, w;
  std::cin >> h >> w;
  std::vector<u32> a(h * w);
  for (auto& e : a) std::cin >> e;
  u32 acc = std::accumulate(a.cbegin(), a.cend(), 0);
  u32 min = *std::min_element(a.cbegin(), a.cend());
  std::cout << (acc - min * h * w) << '\n';
}
