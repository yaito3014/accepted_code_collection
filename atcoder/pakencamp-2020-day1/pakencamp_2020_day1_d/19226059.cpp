// URL: https://atcoder.jp/contests/pakencamp-2020-day1/submissions/19226059
// Date: Wed, 06 Jan 2021 02:01:28 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cstdint>
#include <iostream>

int main() {
  using i64 = int_fast64_t;
  i64 n, k;
  std::cin >> n >> k;
  auto cube = [](const auto& x) { return x * x * x; };
  i64 ans = k <= n     ? cube(k) :
            k <= 2 * n ? cube(k) - 3 * cube(k - n) :
            k <= 3 * n ? cube(n) * 6 - cube(3 * n - k) :
                         cube(n) * 6;
  std::cout << ans << '\n';
}
