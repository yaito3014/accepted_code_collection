// URL: https://atcoder.jp/contests/dp/submissions/6545360
// Date: Fri, 26 Jul 2019 12:50:48 +0000
// Language: C++14 (GCC 5.4.1)
/*
* Copyright 2019 yaito3014
*/
#include "bits/stdc++.h"
using namespace std;

int main() {
  constexpr int MAX_N = 100;
  constexpr int MAX_V = 1000;
  constexpr int64_t INF = INT64_MAX - 1000000000;
  int N, W;
  cin >> N >> W;
  vector<int> w(N), v(N);
  for (int i = 0; i < N; ++i)
    cin >> w[i] >> v[i];
  array<int64_t, (MAX_N * MAX_V + 1)> dp;
  dp.fill(INF);
  dp[0] = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = MAX_N * MAX_V; j >= v[i]; --j) {
      dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
    }
  }
  int ans = distance(
    find_if(rbegin(dp), rend(dp), [&](auto c) { return c <= W; }),
    rend(dp)) - 1;
  cout << ans << endl;
}
