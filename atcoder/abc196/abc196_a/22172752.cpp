// URL: https://atcoder.jp/contests/abc196/submissions/22172752
// Date: Fri, 30 Apr 2021 11:02:37 +0000
// Language: C++ (GCC 9.2.1)
#include <cstdint>
#include <iostream>
#include <limits>
#include <numeric>

int main() {
  using i32 = int32_t;
  i32 a, b, c, d;
  std::cin >> a >> b >> c >> d;
  i32 ans = std::numeric_limits<i32>::min();
  for (i32 x = a; x <= b; ++x)
    for (i32 y = c; y <= d; ++y) ans = std::max(ans, x - y);
  std::cout << ans << '\n';
}
