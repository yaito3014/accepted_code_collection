// URL: https://atcoder.jp/contests/abc138/submissions/6992936
// Date: Sun, 18 Aug 2019 12:17:48 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& v : A)cin >> v;
  double ans = 0;
  for (auto& v : A)
   ans += 1. / v;
  ans = 1. / ans;
  cout << fixed << setprecision(6) << ans << endl;
}
