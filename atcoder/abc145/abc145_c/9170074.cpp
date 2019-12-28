// URL: https://atcoder.jp/contests/abc145/submissions/9170074
// Date: Sat, 28 Dec 2019 08:10:23 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

void dfs(int n, double len, const int N, double& sum, vector<vector<double>>& G, vector<bool>& visited) {
  visited[n] = true;
  if (all_of(begin(visited), end(visited), [](bool a) { return a; })) {
    sum += len;
    visited[n] = false;
    return;
  }
  for (int i = 0; i < N; ++i) {
    if (visited[i])continue;
    dfs(i, len + G[n][i], N, sum, G, visited);
  }
  visited[n] = false;
}

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> x(N), y(N);
  for (int i = 0; i < N; ++i)cin >> x[i] >> y[i];
  constexpr double INF = DBL_MAX;
  vector<vector<double>> G(N, vector<double>(N, INF));
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      G[j][i] = G[i][j] = hypot(x[i] - x[j], y[i] - y[j]);
    }
  }
  double sum = 0;
  for (int i = 0; i < N; ++i) {
    vector<bool> visited(N, false);
    dfs(i, 0, N, sum, G, visited);
  }
  int n = 1;
  for (int i = 1; i <= N; ++i)n *= i;
  cout << fixed << setprecision(7) << sum / n << endl;
}
