// URL: https://atcoder.jp/contests/abc119/submissions/18904539
// Date: Sun, 20 Dec 2020 06:15:32 +0000
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
  double ans = 0;
  for (u32 i = 0; i < n; ++i) {
    double x;
    std::string v;
    std::cin >> x >> v;
    ans += v == "JPY" ? x : x * 380000 ;
  }
  std::cout << std::fixed << std::setprecision(10) << ans << '\n';
}
