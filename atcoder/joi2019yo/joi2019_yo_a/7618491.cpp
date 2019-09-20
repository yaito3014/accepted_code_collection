// URL: https://atcoder.jp/contests/joi2019yo/submissions/7618491
// Date: Fri, 20 Sep 2019 11:38:26 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int ans = 0, coins = 0;
  while (coins < C) {
    ++ans;
    coins += A;
    if (ans % 7 == 0)coins += B;
  }
  cout << ans << endl;
}
