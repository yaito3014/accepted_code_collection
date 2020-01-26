// URL: https://atcoder.jp/contests/abc153/submissions/9747668
// Date: Sun, 26 Jan 2020 12:17:54 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int64_t H;
  cin >> H;
  int64_t ans = 0;
  int64_t attack = 1;
  while (H > 0) {
    ans += attack;
    attack *= 2;
    H /= 2;
  }
  cout << ans << endl;
}
