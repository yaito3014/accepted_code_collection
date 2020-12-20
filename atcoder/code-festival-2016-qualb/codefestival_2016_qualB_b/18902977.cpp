// URL: https://atcoder.jp/contests/code-festival-2016-qualb/submissions/18902977
// Date: Sun, 20 Dec 2020 04:40:39 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <numeric>
#include <string>
#include <vector>

int main() {
  using i32 = int32_t;
  using u32 = uint32_t;
  using i64 = int64_t;
  using u64 = uint64_t;
  u32 n, a, b;
  std::cin >> n >> a >> b;
  std::string s;
  std::cin >> s;
  u32 c = 0;
  u32 f = 0;
  for (u32 i = 0; i < n; ++i) {
      std::cout << (c < a + b &&
          ((s[i] == 'a' && ++c) ||
              (s[i] == 'b' && f++ < b && ++c))
          ? "Yes" : "No") << '\n';
  }
}
