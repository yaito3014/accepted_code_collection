// URL: https://atcoder.jp/contests/agc035/submissions/18903563
// Date: Sun, 20 Dec 2020 05:19:06 +0000
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
  std::map<u32, u32> m;
  for (u32 i = 0; i < n; ++i) {
    u32 a;
    std::cin >> a;
    ++m[a];
  }
  std::cout << (
      (m.size() == 1 && m.begin()->first == 0) ||
      (m.size() == 2 && m.begin()->first == 0 &&
          m.begin()->second * 2 == next(m.begin())->second
      ) ||
      (m.size() == 3 &&
          (m.begin()->first ^ next(m.begin())->first)
              == next(m.begin(), 2)->first &&
          m.begin()->second == next(m.begin())->second &&
          next(m.begin())->second == next(m.begin(), 2)->second
      )
      ? "Yes" : "No") << '\n';
}
