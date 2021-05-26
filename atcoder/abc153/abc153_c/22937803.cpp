// URL: https://atcoder.jp/contests/abc153/submissions/22937803
// Date: Wed, 26 May 2021 18:20:31 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main() {
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;

  u32 n, k;
  std::cin >> n >> k;

  std::vector<u32> h(n);
  for (auto& e : h) std::cin >> e;

  auto first = std::begin(h), mid = std::next(first, n < k ? 0 : n - k);
  std::partial_sort(first, mid, std::end(h));
  u64 ans = std::accumulate(first, mid, u64(0));
  std::cout << ans << std::endl;
}
