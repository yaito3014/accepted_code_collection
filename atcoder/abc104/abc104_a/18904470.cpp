// URL: https://atcoder.jp/contests/abc104/submissions/18904470
// Date: Sun, 20 Dec 2020 06:11:38 +0000
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
  u32 r;
  std::cin >> r;
  std::cout << (r < 1200 ? "ABC" : r < 2800 ? "ARC" : "AGC") << '\n';
}
