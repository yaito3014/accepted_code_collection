// URL: https://atcoder.jp/contests/abc200/submissions/22502217
// Date: Mon, 10 May 2021 12:39:11 +0000
// Language: C++ (GCC 9.2.1)
#include <cstdint>
#include <iostream>

int main() {
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  u64 n;
  u32 k;
  std::cin >> n >> k;
  for (u32 i = 0; i < k; ++i) n = n % 200 ? n * 1000 + 200 : n / 200;
  std::cout << n << '\n';
}
