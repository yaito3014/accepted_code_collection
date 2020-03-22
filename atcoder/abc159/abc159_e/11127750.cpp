// URL: https://atcoder.jp/contests/abc159/submissions/11127750
// Date: Sun, 22 Mar 2020 13:19:47 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int H, W, K;
  cin >> H >> W >> K;
  vector<vector<int>> S(H, vector<int>(W));
  for (auto& row : S)for (auto& e : row) {
    char c;
    cin >> c;
    e = c - '0';
  }
  vector<vector<int>> sum(H + 1, vector<int>(W + 1, 0));
  for (int h = 0; h < H; ++h) {
    for (int w = 0; w < W; ++w) {
      sum[h + 1][w + 1] = sum[h + 1][w] + sum[h][w + 1] - sum[h][w] + S[h][w];
    }
  }
  auto get_sum = [&sum](int h1, int w1, int h2, int w2) { return sum[h2][w2] - sum[h2][w1] - sum[h1][w2] + sum[h1][w1]; };
  const int limit = 1 << (H - 1);
  int ans = INT_MAX;
  for (int mask = 0; mask < limit; ++mask) {
    vector<pair<int, int>> sep;
    {
      int sum = 0;
      for (int i = 0, count = 0; i < H; ++i) {
        ++count;
        if ((mask >> i) & 1)sep.emplace_back(sum, count), sum += count, count = 0;
      }
      sep.emplace_back(sum, H - sum);
    }
    int cost = sep.size() - 1;
    int prev_w = 0;
    for (int w = 0; w < W; ++w) {
      bool ok = true;
      for (auto& p : sep) {
        int y, n;
        tie(y, n) = p;
        if (get_sum(y, prev_w, y + n, w + 1) <= K)continue;
        ok = false;
        break;
      }
      if (ok)continue;
      ++cost;
      prev_w = w;
    }
    bool ok = true;
    for (auto& p : sep) {
      int y, n;
      tie(y, n) = p;
      if (get_sum(y, prev_w, y + n, W) <= K)continue;
      ok = false;
      break;
    }
    if (!ok)continue;
    ans = min(ans, cost);
  }
  cout << ans << endl;
}
