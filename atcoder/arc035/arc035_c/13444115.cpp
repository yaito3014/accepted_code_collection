// URL: https://atcoder.jp/contests/arc035/submissions/13444115
// Date: Thu, 21 May 2020 03:07:59 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  using ll = long long;
  constexpr int INF = INT_MAX / 2;
  int N, M;
  cin >> N >> M;
  vector<vector<int>> dp(N, vector<int>(N, INF));
  for (int i = 0; i < N; ++i) dp[i][i] = 0;
  for (int i = 0; i < M; ++i) {
  	int A, B, C;
  	cin >> A >> B >> C, --A, --B;
  	dp[A][B] = dp[B][A] = C;
  }
  for (int j = 0; j < N; ++j)
  	for (int k = 0; k < N; ++k)
  	  for (int l = 0; l < N; ++l)
  	    dp[k][l] = min(dp[k][l], dp[k][j] + dp[j][l]);
  int K;
  cin >> K;
  for (int i = 0; i < K; ++i) {
  	int X, Y, Z;
  	cin >> X >> Y >> Z, --X, --Y;
  	dp[X][Y] = min(dp[X][Y], Z);
  	dp[Y][X] = min(dp[Y][X], Z);
  	for (int j : { X, Y })
  	  for (int k = 0; k < N; ++k)
  	    for (int l = 0; l < N; ++l)
  	      dp[k][l] = min(dp[k][l], dp[k][j] + dp[j][l]);
  	ll sum = 0;
  	for (int j = 0; j < N; ++j)
  	  for (int k = 0; k < N; ++k)
  	    sum += dp[j][k];
  	cout << (sum / 2) << '
';
  }
}
