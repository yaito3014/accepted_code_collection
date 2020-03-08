// URL: https://atcoder.jp/contests/abc037/submissions/10660423
// Date: Sun, 08 Mar 2020 06:55:59 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  vector<int> a(N);
  vector<int64_t> sum(N + 1, 0);
  for (auto& e : a)cin >> e;
  for (int i = 0; i < N; ++i)
    sum[i + 1] = sum[i] + a[i];
  int64_t ans = 0;
  for (int i = 0; i <= N - K; ++i)
    ans += sum[i + K] - sum[i];
  cout << ans << endl;
}
