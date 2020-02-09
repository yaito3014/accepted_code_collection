// URL: https://atcoder.jp/contests/abc154/submissions/9993037
// Date: Sun, 09 Feb 2020 12:30:00 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  vector<int> p(N);
  for (auto& v : p)cin >> v;
  vector<double> csum(N + 1, 0);
  for (int i = 0; i < N; ++i)
    csum[i + 1] = csum[i] + (p[i] + 1) / 2.;
  double ans = 0;
  for (int i = 0; i <= N - K; ++i)
    ans = max(ans, csum[i + K] - csum[i]);
  cout << fixed << setprecision(7) << ans << endl;
}
