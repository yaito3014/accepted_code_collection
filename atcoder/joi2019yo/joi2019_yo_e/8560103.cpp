// URL: https://atcoder.jp/contests/joi2019yo/submissions/8560103
// Date: Fri, 22 Nov 2019 13:04:15 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> L(M), R(M);
  for (auto& v : A)cin >> v;
  for (int i = 0; i < M; ++i) {
    cin >> L[i] >> R[i];
    --L[i], --R[i];
  }
  vector<int> X(N);
  iota(begin(X), end(X), 0);
  for (int i = 0; i < M; ++i)X[R[i]] = min(X[R[i]], L[i]);
  for (int i = N - 2; i >= 0; --i)X[i] = min(X[i], X[i + 1]);
  vector<int64_t> dp(N + 1, 0);
  for (int i = 0; i < N; ++i)
    dp[i + 1] = max(dp[i], dp[X[i]] + A[i]);
  cout << dp[N] << endl;
}
