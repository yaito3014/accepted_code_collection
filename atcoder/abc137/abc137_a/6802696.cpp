// URL: https://atcoder.jp/contests/abc137/submissions/6802696
// Date: Sat, 10 Aug 2019 12:02:27 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int ans = max(max(A + B, A - B), A * B);
  cout << ans << endl;
}
