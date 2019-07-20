// URL: https://atcoder.jp/contests/abc134/submissions/6459873
// Date: Sat, 20 Jul 2019 12:25:15 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {
  std::cin.tie(0); std::ios::sync_with_stdio(0);

  int N;
  std::cin >> N;
  std::vector<int> A(N);
  for (auto& v : A)std::cin >> v;
  std::vector<int> l(N + 2, -1), r(N + 2, -1);
  l[1] = A[0];
  r[N] = A[N - 1];
  for (int i = 0; i < N; ++i)
    l[i + 1] = std::max(l[i], A[i]);
  for (int i = N - 1; i; --i)
    r[i + 1] = std::max(r[i + 2], A[i]);
  for (int i = 1; i <= N; ++i) {
    int ans = std::max(l[i - 1], r[i + 1]);
    std::cout << ans << "
";
  }

}
