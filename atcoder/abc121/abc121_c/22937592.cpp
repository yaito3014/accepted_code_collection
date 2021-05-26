// URL: https://atcoder.jp/contests/abc121/submissions/22937592
// Date: Wed, 26 May 2021 17:47:52 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <utility>
#include <vector>

int main() {
  using u32 = int_fast32_t;
  using u64 = int_fast64_t;

  u32 n, m;
  std::cin >> n >> m;

  std::vector<std::pair<u64, u32>> shops(n);
  for (auto& [a, b] : shops) std::cin >> a >> b;

  std::sort(std::begin(shops), std::end(shops));

  u64 ans = 0;
  for (const auto& [a, b] : shops) {
    ans += a * std::min(m, b);
    if (m <= b) break;
    m -= b;
  }
  std::cout << ans << std::endl;
}
