// URL: https://atcoder.jp/contests/abc116/submissions/9301669
// Date: Fri, 03 Jan 2020 12:40:34 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> h(N);
  for (auto& v : h)cin >> v;
  int prev = 0;
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    if (prev < h[i])
      ans += h[i] - prev;
    prev = h[i];
  }
  cout << ans << endl;
}
