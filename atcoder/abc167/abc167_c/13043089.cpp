// URL: https://atcoder.jp/contests/abc167/submissions/13043089
// Date: Sun, 10 May 2020 12:15:03 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> C(N);
  vector<vector<int>> A(N, vector<int>(M));
  constexpr int INF = INT_MAX;
  int ans = INF;
  for (int i = 0; i < N; ++i) {
    cin >> C[i];
    for (auto& e : A[i]) cin >> e;
  }
  const int Max = 1 << N;
  for (int mask = 0; mask < Max; ++mask) {
    int sum = 0;
    vector<int> algos(M, 0);
    for (int i = 0; i < N; ++i) {
      if (~(mask >> i) & 1) continue;
      for (int j = 0; j < M; ++j) algos[j] += A[i][j];
      sum += C[i];
    }
    bool ok = all_of(cbegin(algos), cend(algos), [&](int v) { return v >= X; });
    if (ok) ans = min(ans, sum);
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
}
