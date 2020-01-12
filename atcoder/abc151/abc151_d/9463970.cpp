// URL: https://atcoder.jp/contests/abc151/submissions/9463970
// Date: Sun, 12 Jan 2020 12:46:30 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (auto& v : S)cin >> v;
  auto to_index = [](int x, int y) { return x + y * 20; };
  auto to_coord = [](int index, int& x, int& y) { y = index / 20, x = index % 20; };
  constexpr int INF = INT_MAX / 2;
  const int MAX = W + H * 20;
  vector<vector<int>> dp(MAX, vector<int>(MAX, INF));
  for (int y = 0; y < H; ++y)
    for (int x = 0; x < W; ++x) {
      if (S[y][x] == '#')continue;
      dp[to_index(x, y)][to_index(x, y)] = 0;
      if (x > 0 && S[y][x - 1] == '.')dp[to_index(x, y)][to_index(x - 1, y)] = 1;
      if (x < W - 1 && S[y][x + 1] == '.')dp[to_index(x, y)][to_index(x + 1, y)] = 1;
      if (y > 0 && S[y - 1][x] == '.')dp[to_index(x, y)][to_index(x, y - 1)] = 1;
      if (y < H - 1 && S[y + 1][x] == '.')dp[to_index(x, y)][to_index(x, y + 1)] = 1;
    }
  for (int k = 0; k < MAX; ++k)
    for (int u = 0; u < MAX; ++u)
      for (int v = 0; v < MAX; ++v)
        dp[u][v] = min(dp[u][v], dp[u][k] + dp[k][v]);
  int ans = 0;
  for (int x1 = 0; x1 < W; ++x1)for (int y1 = 0; y1 < H; ++y1)
    for (int x2 = 0; x2 < W; ++x2)for (int y2 = 0; y2 < H; ++y2) {
      if (x1 == x2 && y1 == y2)continue;
      if (S[y1][x1] != '.' || S[y2][x2] != '.')continue;
      ans = max(ans, dp[to_index(x1, y1)][to_index(x2, y2)]);
    }
  cout << ans << endl;
}
