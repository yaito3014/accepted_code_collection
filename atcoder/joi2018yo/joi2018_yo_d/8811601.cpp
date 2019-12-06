// URL: https://atcoder.jp/contests/joi2018yo/submissions/8811601
// Date: Fri, 06 Dec 2019 12:31:58 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> L(N);
  for (auto& v : L)cin >> v;
  constexpr int INF = INT_MAX;
  vector<int> sum(N + 1, 0);
  for (int i = 0; i < N; ++i)sum[i + 1] = sum[i] + L[i];
  const int MaxL = sum[N];
  int ans = INF;
  for (int low = 0; low <= MaxL; ++low) {
    vector<int> dp(N + 1,INF);
    dp[0] = low;
    for (int i = 0; i < N; ++i) {
      for (int j = i; j >= 0; --j) {
        if (i == N - 1 && j == 0)continue;
        int len = sum[i + 1] - sum[j];
        if (len >= low)dp[i + 1] = min(dp[i + 1], max(len, dp[j]));
      }
    }
    ans = min(ans, dp[N] - low);
  }
  cout << ans << endl;
}
