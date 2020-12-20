// URL: https://atcoder.jp/contests/abc101/submissions/18903019
// Date: Sun, 20 Dec 2020 04:43:04 +0000
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
  std::string s;
  std::cin >> s;
  i32 ans = 0;
  for (char c : s) ans += c == '+' ? 1 : -1;
  std::cout << ans << '\n';
}
