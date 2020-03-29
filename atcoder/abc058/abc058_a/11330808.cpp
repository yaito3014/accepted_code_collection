// URL: https://atcoder.jp/contests/abc058/submissions/11330808
// Date: Sun, 29 Mar 2020 02:37:24 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;
  cout << (b - a == c - b ? "YES" : "NO") << endl;
}
