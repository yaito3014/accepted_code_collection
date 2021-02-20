// URL: https://atcoder.jp/contests/abc192/submissions/20305929
// Date: Sat, 20 Feb 2021 12:27:51 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>

int main() {
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  u32 n, k;
  std::cin >> n >> k;
  std::string s = std::to_string(n);
  for (u32 i = 0; i < k; ++i) {
    std::string g1 = s, g2 = s;
    std::sort(g1.rbegin(), g1.rend());
    std::sort(g2.begin(), g2.end());
    s = std::to_string(std::stoi(g1) - std::stoi(g2));
  }
  std::cout << s << '\n';
}
