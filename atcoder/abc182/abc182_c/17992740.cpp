// URL: https://atcoder.jp/contests/abc182/submissions/17992740
// Date: Sun, 08 Nov 2020 13:38:48 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int main() {
  std::string N;
  std::cin >> N;
  int sum = 0, o = 0, t = 0;
  for (char c : N) {
    sum += c - '0';
    if ((c - '0') % 3 == 1) ++o;
    if ((c - '0') % 3 == 2) ++t;
  }
  int ans;
  switch (sum % 3) {
    case 0:
      ans = 0;
      break;
    case 1:
      ans = o > 0 ? 1 : t > 1 ? 2 : -1;
      break;
    case 2:
      ans = t > 0 ? 1 : o > 1 ? 2 : -1;
      break;
  }
  if (ans >= N.length()) ans = -1;
  std::cout << ans << '\n';
}
