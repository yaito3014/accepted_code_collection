// URL: https://atcoder.jp/contests/abc066/submissions/21221681
// Date: Wed, 24 Mar 2021 11:02:31 +0000
// Language: C++ (GCC 9.2.1)
#include <cstdint>
#include <iostream>
#include <string>
#include <string_view>

int main() {
  using u32 = uint32_t;
  std::string s;
  std::cin >> s;
  std::string_view sv = s;
  u32 len = sv.length() - 2;
  while (len && sv.substr(0, len / 2) != sv.substr(len / 2, len / 2))
    sv = sv.substr(0, len -= 2);
  std::cout << len << '\n';
}
