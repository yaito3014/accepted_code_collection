// URL: https://atcoder.jp/contests/abc144/submissions/8156021
// Date: Sun, 27 Oct 2019 12:10:07 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int64_t N;
  cin >> N;
  int64_t ans = INT64_MAX;
  for (int64_t i = 1; i * i <= N; ++i) {
    if (N % i)continue;
    ans = min(ans,i+N/i-2);
  }
  cout << ans << endl;
}
