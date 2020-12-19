// URL: https://atcoder.jp/contests/abc186/submissions/18881237
// Date: Sat, 19 Dec 2020 12:42:56 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  using u32 = uint_fast32_t;
  u32 n;
  std::cin >> n;
  u32 ans = 0;
  for (u32 i = 1; i <= n; ++i) {
  	bool has_7 = false;
    for (u32 m = i; m; m /= 10) {
      if (m % 10 != 7) continue;
      has_7 = true;
      break;
    }
    for (u32 m = i; m; m /= 8) {
      if (m % 8 != 7) continue;
      has_7 = true;
      break;
    }
    if (has_7) continue;
    ++ans;
  }
  std::cout << ans << '\n';
}
