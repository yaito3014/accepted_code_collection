// URL: https://atcoder.jp/contests/abc169/submissions/13908499
// Date: Mon, 01 Jun 2020 01:14:45 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  constexpr int kMod = 998244353;
  int N, S;
  cin >> N >> S;
  vector<int> A(N);
  for (auto& e : A) cin >> e;
  vector<vector<int>> dp(N + 1, vector<int>(S + 1, 0));
  dp[0][0] = 1;
  for (int i = 0; i < N; ++i)
  	for (int j = 0; j <= S; ++j) {
  	  dp[i + 1][j] = dp[i][j] * 2 % kMod;
  	  if (j >= A[i])
  	    dp[i + 1][j] = (dp[i + 1][j] + dp[i][j - A[i]]) % kMod;
  	}
  cout << dp[N][S] << '\n';
}
