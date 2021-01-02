// URL: https://atcoder.jp/contests/abc187/submissions/19137062
// Date: Sat, 02 Jan 2021 12:28:20 +0000
// Language: C++ (GCC 9.2.1)
#include <cmath>
#include <cstdint>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>

int main() {
  using u32 = uint_fast32_t;
  u32 n;
  std::cin >> n;
  std::map<std::string, u32> m;
  std::set<std::string> st;
  for (u32 i = 0; i < n; ++i) {
    std::string s;
    std::cin >> s;
    if (st.find(s) != st.end()) continue;
    st.insert(s);
    ++m[s[0] == '!' ? s.substr(1) : s];
  }
  for (const auto& [k, v] : m) {
    if (v < 2) continue;
    std::cout << k << '\n';
    return 0;
  }
  std::cout << "satisfiable" << '\n';
}
