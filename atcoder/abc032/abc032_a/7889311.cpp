// URL: https://atcoder.jp/contests/abc032/submissions/7889311
// Date: Sun, 06 Oct 2019 13:39:43 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int n, a, b;
  cin >> a >> b >> n;
  int c = a * b / gcd(a, b);
  int ans = c * (n / c + (n % c ? 1 : 0));
  cout << ans << endl;
}
