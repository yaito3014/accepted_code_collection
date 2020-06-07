// URL: https://atcoder.jp/contests/abc097/submissions/14091349
// Date: Sun, 07 Jun 2020 11:56:55 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  bool ans = (abs(a - b) <= d && abs(b - c) <= d) || abs(a - c) <= d;
  cout << (ans ? "Yes" : "No") << '\n';
}
