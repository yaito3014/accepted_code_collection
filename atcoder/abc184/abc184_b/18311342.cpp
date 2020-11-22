// URL: https://atcoder.jp/contests/abc184/submissions/18311342
// Date: Sun, 22 Nov 2020 12:03:53 +0000
// Language: C++ (GCC 9.2.1)
#include <iostream>
#include <numeric>

int main() {
  int n, x;
  std::cin >> n >> x;
  std::string s;
  std::cin >> s;
  for (auto c : s)
    if (c == 'x')
      x = std::max(0, x - 1);
    else
      ++x;
  std::cout << x << '\n';
}
