// URL: https://atcoder.jp/contests/abc096/submissions/14071137
// Date: Sat, 06 Jun 2020 14:31:06 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;
  cout << (b >= a ? a : a - 1) << '\n';
}
