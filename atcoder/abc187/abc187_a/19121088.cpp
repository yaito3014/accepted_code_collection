// URL: https://atcoder.jp/contests/abc187/submissions/19121088
// Date: Sat, 02 Jan 2021 12:03:34 +0000
// Language: C++ (GCC 9.2.1)
#include <cstdint>
#include <iostream>
#include <numeric>
#include <queue>
#include <string>
#include <vector>

int main() {
  std::string a, b;
  std::cin >> a >> b;
  int aa = 0, bb = 0;
  for (char c : a) aa += c - '0';
  for (char c : b) bb += c - '0';
  std::cout << std::max(aa, bb) << '\n';
}
