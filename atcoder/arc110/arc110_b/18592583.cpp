// URL: https://atcoder.jp/contests/arc110/submissions/18592583
// Date: Sat, 05 Dec 2020 13:31:31 +0000
// Language: C++ (GCC 9.2.1)
#include <cstdint>
#include <iostream>
#include <numeric>
#include <string>

int main(){
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  u32 n;
  std::cin >> n;
  std::string t;
  std::cin >> t;
  std::string s;
  u32 c = n / 3 + (n % 3 != 0);
  s.reserve(3 * c);
  for (u32 i = 0; i < c; ++i) s += "110";
  if (s.find(t) == std::string::npos) {
  	s += "110";
    ++c;
  }
  size_t i = s.find(t);
  u64 ans = i == std::string::npos
            ? 0
            : 10000000000 - c + 1;
  std::cout << (t == "1" ? 20000000000 : ans) << '\n';
}
