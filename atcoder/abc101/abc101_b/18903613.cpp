// URL: https://atcoder.jp/contests/abc101/submissions/18903613
// Date: Sun, 20 Dec 2020 05:21:23 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>

int main() {
  using i32 = int32_t;
  using u32 = uint32_t;
  using i64 = int64_t;
  using u64 = uint64_t;
  u32 n;
  std::cin >> n;
  u32 s = 0;
  for (u32 m = n; m; m /= 10) s += m % 10;
  std::cout << (n % s ? "No" : "Yes") << '\n';
}
