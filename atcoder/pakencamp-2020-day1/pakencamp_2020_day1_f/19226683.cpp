// URL: https://atcoder.jp/contests/pakencamp-2020-day1/submissions/19226683
// Date: Wed, 06 Jan 2021 02:22:47 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
  using u64 = int_fast64_t;
  u64 p;
  std::cin >> p;
  if (p == 1) std::cout << 1 << '\n';
  else {
  	u64 a = 1, b = 1, c = (a + b) % p;
    int i = 3;
    while (c) {
      a = b;
      b = c;
      c = (a + c) % p;
      ++i;
    }
    std::cout << i << '\n';
  }
}
