// URL: https://atcoder.jp/contests/abc170/submissions/14288030
// Date: Sun, 14 Jun 2020 12:02:17 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  for (int i = 0; i < 5; ++i) {
    cin >> n;
    if (n != 0) continue;
    cout << (i + 1) << '\n';
    break;
  }
}
