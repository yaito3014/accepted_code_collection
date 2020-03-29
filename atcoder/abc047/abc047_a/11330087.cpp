// URL: https://atcoder.jp/contests/abc047/submissions/11330087
// Date: Sun, 29 Mar 2020 02:02:16 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;
  bool ans = (a + b + c) % 2 == 0 && (a + b + c) / 2 == max({ a,b,c });
  cout << (ans ? "Yes" : "No") << endl;
}
