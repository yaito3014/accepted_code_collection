// URL: https://atcoder.jp/contests/gigacode-2019/submissions/8596702
// Date: Sun, 24 Nov 2019 05:03:05 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int H, W;
  int64_t K, V;
  cin >> H >> W >> K >> V;
  vector<vector<int>> A(H, vector<int>(W));
  for (auto& row : A)for (auto& elem : row)cin >> elem;
  vector<vector<int64_t>> sum(H + 1, vector<int64_t>(W + 1, 0));
  for (int h = 0; h < H; ++h) {
    for (int w = 0; w < W; ++w) {
      sum[h + 1][w + 1] = A[h][w] + sum[h + 1][w] + sum[h][w + 1] - sum[h][w];
    }
  }
  int ans = 0;
  for (int h1 = 0; h1 <= H; ++h1) {
    for (int h2 = h1 + 1; h2 <= H; ++h2) {
      for (int w1 = 0; w1 <= W; ++w1) {
        for (int w2 = w1 + 1; w2 <= W; ++w2) {
          int64_t A_s = sum[h2][w2] - sum[h2][w1] - sum[h1][w2] + sum[h1][w1];
          int S = (w2 - w1) * (h2 - h1);
          int64_t V_ = A_s + S * K;
          if (V_ <= V)ans = max(ans, S);
        }
      }
    }
  }
  cout << ans << endl;
}
