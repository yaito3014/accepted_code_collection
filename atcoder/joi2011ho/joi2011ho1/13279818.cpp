// URL: https://atcoder.jp/contests/joi2011ho/submissions/13279818
// Date: Sun, 17 May 2020 06:48:01 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int M, N;
  cin >> M >> N;
  int K;
  cin >> K;
  const string JOI = "JOI";
  vector<string> field(M);
  for (auto& row : field) cin >> row;
  array<vector<vector<int>>, 3> sum;
  fill(begin(sum), end(sum), vector<vector<int>>(M + 1, vector<int>(N + 1, 0)));
  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < M; ++j)
      for (int k = 0; k < N; ++k)
        sum[i][j + 1][k + 1] = sum[i][j + 1][k] + sum[i][j][k + 1] -
                               sum[i][j][k] + (JOI[i] == field[j][k] ? 1 : 0);
  for (int i = 0; i < K; ++i) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int j = 0; j < 3; ++j) {
      int ans = sum[j][c][d] - sum[j][a - 1][d] - sum[j][c][b - 1] +
                sum[j][a - 1][b - 1];
      cout << ans;
      if (j < 2) cout << ' ';
    }
    cout << '\n';
  }
}
