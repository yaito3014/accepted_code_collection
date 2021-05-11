// URL: https://atcoder.jp/contests/abc200/submissions/22510755
// Date: Tue, 11 May 2021 01:18:47 +0000
// Language: C++ (GCC 9.2.1)
#include <array>
#include <cstdint>
#include <iostream>
#include <limits>

int main() {
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  constexpr u32 kFactor = 200;
  std::array<u32, kFactor> counts = {};

  u32 n;
  std::cin >> n;
  for (u32 i = 0; i < n; ++i) {
    u32 a;
    std::cin >> a;
    ++counts[a % kFactor];
  }
  u64 ans = 0;
  for (u64 e : counts) ans += e * (e - 1) / 2;  // e C 2
  std::cout << ans << '\n';
}
