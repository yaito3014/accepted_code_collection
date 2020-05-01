// URL: https://codeforces.com/contest/1348/submission/78717738
// Date: Fri, 01 May 2020 16:00:36 +0000
// Language: GNU C++17
﻿// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int T;
  cin >> T;
  for (int t = 0; t < T; ++t) {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto& e : A)cin >> e;
    set<int> s(cbegin(A), cend(A));
    if (s.size() > K) {
      cout << -1 << '
';
      continue;
    }
    cout << (K * N) << '
';
    for (int i = 0; i < N; ++i) {
      for (int e : s)cout << e << ' ';
      for (int j = 0; j < K - int(s.size()); ++j) cout << 1 << ' ';
    }
    cout << '
';
  }
}
