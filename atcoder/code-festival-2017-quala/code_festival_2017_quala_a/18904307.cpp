// URL: https://atcoder.jp/contests/code-festival-2017-quala/submissions/18904307
// Date: Sun, 20 Dec 2020 06:03:16 +0000
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
  std::string s;
  std::cin >> s;
  std::cout << (s.substr(0, 4) == "YAKI" ? "Yes" : "No") << '\n';
}
