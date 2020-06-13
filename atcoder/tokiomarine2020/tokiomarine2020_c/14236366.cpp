// URL: https://atcoder.jp/contests/tokiomarine2020/submissions/14236366
// Date: Sat, 13 Jun 2020 12:33:37 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (auto& e : A) cin >> e;
  for (int i = 0; i < K; ++i) {
    vector<int> B(N + 1, 0);
    for (int j = 0; j < N; ++j)
      ++B[clamp(j - A[j], 0, N)], --B[clamp(j + A[j] + 1, 0, N)];
    partial_sum(cbegin(B), cend(B), begin(B));
    copy_n(cbegin(B), N, begin(A));
    if (all_of(cbegin(A), cend(A), [=](int n) { return n == N; })) break;
  }
  for (const auto& e : A) cout << e << ' ';
  cout << '\n';
}
