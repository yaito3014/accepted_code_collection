// URL: https://atcoder.jp/contests/abc194/submissions/20691587
// Date: Sat, 06 Mar 2021 12:04:15 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdint>
#include <deque>
#include <numeric>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

int main() {
  std::cin.tie(nullptr);
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  using i32 = int_fast32_t;
  using i64 = int_fast64_t;
  u32 a, b;
  std::cin >> a >> b;
  u32 ans = a + b >= 15 && b >= 8 ? 1 :
            a + b >= 10 && b >= 3 ? 2 :
                       a + b >= 3 ? 3 : 4;
  std::cout << ans << '\n';
}
