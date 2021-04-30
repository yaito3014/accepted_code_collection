// URL: https://atcoder.jp/contests/abc079/submissions/22172816
// Date: Fri, 30 Apr 2021 11:06:06 +0000
// Language: C++ (GCC 9.2.1)
#include <iostream>
#include <string>

int main() {
  std::string n;
  std::cin >> n;
  bool ans = n.substr(0, 3) == std::string(3, n.front()) ||
             n.substr(1, 3) == std::string(3, n.back());
  std::cout << (ans ? "Yes" : "No") << '\n';
}
