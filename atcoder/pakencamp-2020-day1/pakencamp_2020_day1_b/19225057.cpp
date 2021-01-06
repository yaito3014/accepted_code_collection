// URL: https://atcoder.jp/contests/pakencamp-2020-day1/submissions/19225057
// Date: Wed, 06 Jan 2021 01:32:13 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>

int main() {
  std::string x;
  std::cin >> x;
  std::cout << *std::max_element(std::cbegin(x), std::cend(x)) << '\n';
}
