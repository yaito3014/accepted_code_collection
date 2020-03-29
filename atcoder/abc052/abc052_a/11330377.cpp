// URL: https://atcoder.jp/contests/abc052/submissions/11330377
// Date: Sun, 29 Mar 2020 02:17:24 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  cout << max(A * B, C * D) << endl;
}
