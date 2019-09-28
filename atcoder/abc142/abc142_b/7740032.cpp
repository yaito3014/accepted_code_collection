// URL: https://atcoder.jp/contests/abc142/submissions/7740032
// Date: Sat, 28 Sep 2019 12:05:41 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  int N,K;
  cin >> N >> K;
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    int h;
    cin >> h;
    if (h >= K)++ans;
  }
  cout << ans << endl;
}
