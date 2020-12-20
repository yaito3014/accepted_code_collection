// URL: https://atcoder.jp/contests/abc144/submissions/18904396
// Date: Sun, 20 Dec 2020 06:07:45 +0000
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
  bool ok = false;
  for (u32 i = 1; i <= 9; ++i) {
    if (n % i) continue;
    if (n / i > 9) continue;
    ok = true;
    break;
  }
  std::cout << (ok ? "Yes" : "No") << '\n';
}
