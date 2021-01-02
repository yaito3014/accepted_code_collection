// URL: https://atcoder.jp/contests/abc187/submissions/19152267
// Date: Sat, 02 Jan 2021 13:09:18 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>

int main() {
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  u32 n;
  std::cin >> n;
  std::vector<std::pair<u64, u64>> ab(n);
  for (auto& [a, b] : ab) std::cin >> a >> b;
  std::sort(std::begin(ab), std::end(ab),
            [](const auto& lhs, const auto& rhs){
              return lhs.first * 2 + lhs.second > rhs.first * 2 + rhs.second;
            });
  std::partial_sum(std::cbegin(ab), std::cend(ab), std::begin(ab),
                       [](const auto& lhs, const auto& rhs){
                         return std::make_pair(lhs.first + rhs.first,
                                                   lhs.second + rhs.second);
                       });
  ab.insert(std::cbegin(ab), std::make_pair(0, 0));
  for (u32 i = 0; i <= n; ++i) {
    if (ab.back().first  >= 2 * ab[i].first + ab[i].second)
      continue;
    std::cout << i << '\n';
    return 0;
  }
  return -1;
}
