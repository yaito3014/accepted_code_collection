// URL: https://atcoder.jp/contests/abc157/submissions/18903781
// Date: Sun, 20 Dec 2020 05:31:04 +0000
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
  std::cout << ((n >> 1) + (n & 1)) << '\n';
}
