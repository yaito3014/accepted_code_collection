// URL: https://atcoder.jp/contests/abc134/submissions/6473499
// Date: Sat, 20 Jul 2019 13:29:19 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {
  std::cin.tie(0); std::ios::sync_with_stdio(0);

  int N;
  std::cin >> N;
  std::vector<int> a(N);
  for (auto& v : a)std::cin >> v;
  int M = 0;
  std::vector<int> dp(N, 0);
  for (int i = N; i >= 1; --i) {
    if (dp[i - 1] % 2 == a[i - 1])continue;
    ++M;
    ++dp[i - 1];
    for (int j = 1; j * j <= i; ++j) {
      if (i % j)continue;
      ++dp[j - 1];
      int k = i / j;
      if (j == k)continue;
      ++dp[k - 1];
    }
  }

  std::cout << M << std::endl;
  for (int i = 0; i < N; ++i)
    if (dp[i] % 2 != a[i])std::cout << i + 1 << std::endl;

}
