// URL: https://atcoder.jp/contests/abc192/submissions/20302297
// Date: Sat, 20 Feb 2021 12:20:42 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>

int main() {
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  std::string s;
  std::cin >> s;
  bool ans = true;
  for (u32 i = 0, len = s.length(); i < len; ++i) {
    if (((i % 2) && isupper(s[i])) || (!(i % 2) && islower(s[i]))) continue;
    ans = false;
    break;
  }
  std::cout << (ans ? "Yes" : "No") << '\n';
}
