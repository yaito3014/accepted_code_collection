// URL: https://atcoder.jp/contests/abc152/submissions/9608200
// Date: Sun, 19 Jan 2020 12:01:38 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> P(N);
  for (auto& v : P)cin >> v;
  set<int> s;
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    if (s.lower_bound(P[i]) == s.begin())
      ++ans;
    s.insert(P[i]);
  }
  cout << ans << endl;
}
