// URL: https://atcoder.jp/contests/abc192/submissions/20299301
// Date: Sat, 20 Feb 2021 12:15:28 +0000
// Language: C++ (GCC 9.2.1)
#include <cstdint>
#include <iostream>

int main() {
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  u32 x;
  std::cin >> x;
  u32 ans  = (x / 100 + 1) * 100 - x;
  std::cout << ans << '\n';
}
