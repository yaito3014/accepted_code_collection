// URL: https://atcoder.jp/contests/abc200/submissions/22501261
// Date: Mon, 10 May 2021 12:00:48 +0000
// Language: C++ (GCC 9.2.1)
#include <cstdint>
#include <iostream>

int main() {
  using u32 = uint_fast32_t;
  u32 n;
  std::cin >> n;
  std::cout << (n / 100 + !!(n % 100)) << '\n';
}
