// URL: https://atcoder.jp/contests/arc020/submissions/14462137
// Date: Thu, 18 Jun 2020 23:49:46 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, C;
  cin >> N >> C;
  vector<int> A(N);
  for (auto& e : A) cin >> e, --e;
  array<array<int, 10>, 2> cnt = {}, idx = {};
  array<int, 2> sum = {};
  for (int i = 0; i < N; ++i) ++cnt[i % 2][A[i]];
  for (int i = 0; i < 2; ++i) {
    sum[i] = accumulate(cbegin(cnt[i]), cend(cnt[i]), 0);
    iota(begin(idx[i]), end(idx[i]), 0);
    sort(begin(idx[i]), end(idx[i]), 
        [&](int a, int b) { return cnt[i][a] > cnt[i][b]; });
  }
  int ans = idx[0][0] != idx[1][0]
            ? sum[0] - cnt[0][idx[0][0]] + sum[1] - cnt[1][idx[1][0]]
            : min(sum[0] - cnt[0][idx[0][0]] + sum[1] - cnt[1][idx[1][1]],
                  sum[0] - cnt[0][idx[0][1]] + sum[1] - cnt[1][idx[1][0]]);
  ans *= C;
  cout << ans << '\n';
}
