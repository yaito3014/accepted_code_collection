// URL: https://atcoder.jp/contests/pakencamp-2020-day1/submissions/19225270
// Date: Wed, 06 Jan 2021 01:36:50 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <string>

int main() {
  int n;
  std::cin >> n;
  std::map<std::string, int> m;
  for (int i = 0; i < n; ++i) {
    int k;
    std::cin >> k;
    for (int j = 0; j < k; ++j) {
     std::string s;
     std::cin >> s;
     ++m[s];
    }
  }
  int ans = 0;
  for (const auto& [k, v] : m) if (v == n) ++ans;
  std::cout << ans << '\n';
}
