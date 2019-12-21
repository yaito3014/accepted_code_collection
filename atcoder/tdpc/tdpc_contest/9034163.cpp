// URL: https://atcoder.jp/contests/tdpc/submissions/9034163
// Date: Sat, 21 Dec 2019 00:59:05 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> p(N);
  for (auto& v : p)cin >> v;
  const int sum = accumulate(begin(p), end(p), 0);
  vector<vector<bool>> dp(N + 1, vector<bool>(sum + 1, false));
  dp[0][0] = true;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j <= sum; ++j) {
      dp[i + 1][j] =  dp[i][j];
      if (j >= p[i])dp[i + 1][j] = dp[i + 1][j] || dp[i][j - p[i]];
    }
  }
  int ans = count(begin(dp[N]), end(dp[N]), true);
  cout << ans << endl;
}
