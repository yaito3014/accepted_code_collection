// URL: https://atcoder.jp/contests/agc046/submissions/14508365
// Date: Sat, 20 Jun 2020 17:06:34 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int X;
  cin >> X;
  cout << (lcm(X, 360) / X) << '\n';
}
