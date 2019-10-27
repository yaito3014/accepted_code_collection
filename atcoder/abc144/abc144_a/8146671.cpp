// URL: https://atcoder.jp/contests/abc144/submissions/8146671
// Date: Sun, 27 Oct 2019 12:01:11 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int A, B;
  cin >> A >> B;
  int ans = -1;
  if (A <= 9 && B <= 9)ans = A * B;
  cout << ans << endl;
}
