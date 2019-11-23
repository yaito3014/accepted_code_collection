// URL: https://atcoder.jp/contests/ddcc2020-qual/submissions/8572861
// Date: Sat, 23 Nov 2019 12:04:43 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int X, Y;
  cin >> X >> Y;
  int ans = 0;
  if (X <= 3)ans += 100000 * (4-X);
  if (Y <= 3)ans += 100000 * (4-Y);
  if (X == 1 && Y == 1)ans += 400000;
  cout << ans << endl;
}
