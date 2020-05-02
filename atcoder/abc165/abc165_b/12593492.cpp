// URL: https://atcoder.jp/contests/abc165/submissions/12593492
// Date: Sat, 02 May 2020 12:18:48 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  using ll = long long;
  ll X;
  cin >> X;
  int ans = 0;
  ll m = 100;
  while (m < X)++ans, m += m / 100;
  cout << ans << endl;
}
