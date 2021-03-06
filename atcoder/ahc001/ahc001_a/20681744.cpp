// URL: https://atcoder.jp/contests/ahc001/submissions/20681744
// Date: Sat, 06 Mar 2021 07:08:26 +0000
// Language: C++ (Clang 10.0.0)
#include <cstdint>
#include <iostream>

int main() {
  std::cin.tie(nullptr);
  using u32 = uint32_t;
  u32 n;
  std::cin >> n;
  for (u32 i = 0; i < n; ++i) {
    u32 x, y, r;
    std::cin >> x >> y >> r;
    for(u32 e : { x, y, x + 1, y + 1 })
      std::cout << e << ' ';
    std::cout << '\n';
  }
}
