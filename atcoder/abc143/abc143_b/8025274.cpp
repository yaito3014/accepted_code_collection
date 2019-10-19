// URL: https://atcoder.jp/contests/abc143/submissions/8025274
// Date: Sat, 19 Oct 2019 12:06:18 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int N;
  cin >> N;
  vector<int> d(N);
  for (auto& v : d)cin >> v;
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      ans += d[i] * d[j];
    }
  }
  cout << ans << endl;
}
