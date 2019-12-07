// URL: https://atcoder.jp/contests/joi2013yo/submissions/8828078
// Date: Sat, 07 Dec 2019 15:10:42 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int D, N;
  cin >> D >> N;
  vector<int> T(D);
  for (auto& v : T)cin >> v;
  vector<int> A(N), B(N), C(N);
  for (int i = 0; i < N; ++i)cin >> A[i] >> B[i] >> C[i];
  vector<vector<int>> dp(D, vector<int>(N, 0));
  for (int d = 1; d < D; ++d) {
    for (int i = 0; i < N; ++i) {
      if (T[d] < A[i] || B[i] < T[d])continue;
      for (int j = 0; j < N; ++j) {
        if (T[d-1] < A[j] || B[j] < T[d-1])continue;
        dp[d][i] = max(dp[d][i], dp[d - 1][j] + abs(C[i] - C[j]));
      }
    }
  }
  int ans = *max_element(begin(dp[D - 1]), end(dp[D - 1]));
  cout << ans << endl;
}
