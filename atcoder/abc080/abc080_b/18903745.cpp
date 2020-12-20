// URL: https://atcoder.jp/contests/abc080/submissions/18903745
// Date: Sun, 20 Dec 2020 05:29:34 +0000
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
  u32 x;
  std::cin >> x;
  u32 s = 0;
  for (u32 y = x; y; y /= 10) s += y % 10;
  std::cout << (x % s ? "No" : "Yes") << '\n';
}
