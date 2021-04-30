// URL: https://atcoder.jp/contests/abc196/submissions/22172947
// Date: Fri, 30 Apr 2021 11:13:19 +0000
// Language: C++ (GCC 9.2.1)
#include <iostream>
#include <string>

int main() {
  std::string x;
  std::cin >> x;
  std::cout << x.substr(0, x.find_first_of('.')) << '\n';
}
