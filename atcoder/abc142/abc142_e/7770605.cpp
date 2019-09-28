// URL: https://atcoder.jp/contests/abc142/submissions/7770605
// Date: Sat, 28 Sep 2019 13:56:01 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  struct Key {
    int cost = 0;
    int mask = 0;
  };
  const int All = (1 << N) - 1;
  vector<Key> keys(M);
  for (auto& key : keys) {
    int a, b;
    cin >> a >> b;
    key.cost = a;
    for (int i = 0; i < b; ++i) {
      int c;
      cin >> c;
      key.mask |= (1 << (c - 1));
    }
  }
  constexpr int INF = INT_MAX-100000;
  int n = 1 << N;
  vector<int> dp(n, INF);
  dp[0] = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < M; ++j) {
      dp[i | keys[j].mask] = min(dp[i | keys[j].mask], dp[i] + keys[j].cost);
    }
  }
  int ans = dp[n - 1];
  if (ans == INF)ans = -1;
  cout << ans << endl;
}
