// URL: https://atcoder.jp/contests/arc043/submissions/9869770
// Date: Sun, 02 Feb 2020 08:10:57 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> D(N);
  for (auto& v : D)cin >> v;
  sort(begin(D), end(D));
  vector<int> A(N), B(N);
  constexpr int Mod = 1000000007;
  for (int i = 0; i < N; ++i) {
    A[i] = distance(lower_bound(begin(D), end(D), D[i] * 2), end(D));
    B[i] = distance(begin(D), upper_bound(begin(D), end(D), D[i] / 2));
  }
  vector<int64_t> Asum(N + 1, 0);
  for (int i = N; i > 0; --i)Asum[i - 1] = (Asum[i] + A[i - 1]) % Mod;
  int64_t ans = 0;
  for (int i = 0; i < N; ++i)
    ans = (ans + (B[i] * Asum[N-A[i]]) % Mod) % Mod;
  cout << ans << endl;
}
