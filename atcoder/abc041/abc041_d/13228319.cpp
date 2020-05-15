// URL: https://atcoder.jp/contests/abc041/submissions/13228319
// Date: Fri, 15 May 2020 09:59:44 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> info(M);
  for (auto& p : info) cin >> p.first >> p.second, --p.first, --p.second;
  sort(begin(info), end(info));
  const int Max = 1 << N;
  vector<long long> dp(Max, 0);
  dp[0] = 1;
  for (int mask = 0; mask < Max; ++mask) {
    for (int y = 0; y < N; ++y) {
      if ((mask >> y) & 1) continue;
      bool valid = true;
      for (int x = 0; x < N; ++x) {
        if (~(mask >> x) & 1) continue;
        if (!binary_search(cbegin(info), cend(info), make_pair(y, x))) continue;
        valid = false;
        break;
      }
      if (!valid) continue;
      dp[mask | 1 << y] += dp[mask];
    }
  }
  cout << dp[Max - 1] << endl;
}
