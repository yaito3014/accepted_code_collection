// URL: https://atcoder.jp/contests/abc170/submissions/14297511
// Date: Sun, 14 Jun 2020 12:06:48 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int X, Y;
  cin >> X >> Y;
  int x = 2 * X - Y / 2, y = Y / 2 - X;
  bool ans = Y % 2 == 0 && 0 <= x && 0 <= y;
  cout << (ans ? "Yes" : "No") << endl;
}
