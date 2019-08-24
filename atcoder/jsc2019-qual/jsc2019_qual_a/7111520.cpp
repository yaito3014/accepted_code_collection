// URL: https://atcoder.jp/contests/jsc2019-qual/submissions/7111520
// Date: Sat, 24 Aug 2019 12:20:25 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int M, D;
  cin >> M >> D;
  int ans = 0;
  for (int i = 2; i <= M; ++i)
    for (int j = 2; j <= D; ++j)
      if (j / 10 != 1 && j % 10 != 1 && i == (j / 10) * (j % 10))
        ++ans;
  cout << ans << endl;
}
