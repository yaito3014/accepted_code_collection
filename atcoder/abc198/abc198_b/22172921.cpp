// URL: https://atcoder.jp/contests/abc198/submissions/22172921
// Date: Fri, 30 Apr 2021 11:12:05 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string n;
  std::cin >> n;
  bool ans = false;
  for (int i = 0; i < 10; ++i, n.insert(n.cbegin(), '0'))
    ans = ans || std::equal(n.cbegin(), n.cend(), n.crbegin(), n.crend());
  std::cout << (ans ? "Yes" : "No") << '\n';
}
