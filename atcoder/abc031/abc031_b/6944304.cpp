// URL: https://atcoder.jp/contests/abc031/submissions/6944304
// Date: Sat, 17 Aug 2019 00:14:47 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int L, H;
  cin >> L >> H;
  int N;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    int A;
    cin >> A;
    int ans = -1;
    if (A < L)ans = L - A;
    else if (A <= H) ans = 0;
    cout << ans << "
";
  }
  cout << flush;
}
