// URL: https://atcoder.jp/contests/abc144/submissions/8163077
// Date: Sun, 27 Oct 2019 12:30:37 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int a, b, x;
  cin >> a >> b >> x;
  constexpr double PI = 3.14159265358979;
  double ans = 0;
  if (x >= a * a * b / 2) {
    double V = a * a * b - x;
    double h = V * 2 / (a * a);
    ans = atan(h / a) * 180 / PI;
  }
  else {
    double h = x * 2. / b / a;
    ans = atan(b / h) * 180 / PI;
  }
  cout << fixed << setprecision(7) << ans << endl;
}
