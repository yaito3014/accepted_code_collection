// URL: https://atcoder.jp/contests/abc160/submissions/11277035
// Date: Sat, 28 Mar 2020 12:06:40 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int X;
  cin >> X;
  cout << (X / 500 * 1000 + X % 500 / 5 * 5) << endl;
}
