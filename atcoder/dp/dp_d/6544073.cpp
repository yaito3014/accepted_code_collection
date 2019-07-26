// URL: https://atcoder.jp/contests/dp/submissions/6544073
// Date: Fri, 26 Jul 2019 09:45:58 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {
  int N, W;
  std::cin >> N >> W;
  std::vector<int> w(N), v(N);
  for (int i = 0; i < N; ++i)
    std::cin >> w[i] >> v[i];
  std::vector<int64_t> dp(W + 1, 0);
  for (int i = 0; i < N; ++i) {
    for (int j = W; j >= w[i]; --j) {
      dp[j] = std::max(dp[j], dp[j - w[i]] + v[i]);
    }
  }
  int64_t ans = dp[W];
  std::cout << ans << std::endl;
}
