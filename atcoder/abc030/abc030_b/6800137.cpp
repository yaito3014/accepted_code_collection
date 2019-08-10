// URL: https://atcoder.jp/contests/abc030/submissions/6800137
// Date: Sat, 10 Aug 2019 11:34:11 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  double l = m * 360.0 / 60;
  double s = ((n % 12) * 60 + m) * 360.0 / 720;
  double ans = abs(m * 360.0 / 60 - ((n % 12) * 60 + m) * 360.0 / 720);
  ans = min(ans, 360 - ans);
  cout << fixed << setprecision(7) << ans << endl;
}
