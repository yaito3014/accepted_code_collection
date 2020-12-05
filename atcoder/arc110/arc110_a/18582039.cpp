// URL: https://atcoder.jp/contests/arc110/submissions/18582039
// Date: Sat, 05 Dec 2020 12:35:26 +0000
// Language: C++ (GCC 9.2.1)
#include <cstdint>
#include <iostream>
#include <numeric>

int main(){
  using u64 = uint_fast64_t;
  using u32 = uint_fast32_t;
  u32 n;
  std::cin >> n;
  u64 p = 1;
  for (u32 i = 2; i <= n; ++i) p = std::lcm(p, i);
  std::cout << (p + 1) << '\n';
}
