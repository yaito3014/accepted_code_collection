// URL: https://atcoder.jp/contests/abc153/submissions/9763798
// Date: Sun, 26 Jan 2020 13:21:24 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int H, N;
  cin >> H >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; ++i)cin >> A[i] >> B[i];
  constexpr int INF = 100000000;
  vector<vector<int>> dp(N + 1, vector<int>(H + 1, INF));
  for (int i = 0; i < N; ++i)dp[i][0] = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j <= H; ++j) {
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
      dp[i + 1][j] = min(dp[i + 1][j], dp[i + 1][max(0,j - A[i])] + B[i]);
    }
  }
  cout << dp[N][H] << endl;
}
