// URL: https://atcoder.jp/contests/abc109/submissions/13234565
// Date: Fri, 15 May 2020 13:59:52 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  deque<tuple<int, int, int, int>> ans;
  for (auto& row : A)
    for (auto& e : row) cin >> e;
  for (int h = 0; h < H; ++h) {
    int first = h % 2 ? W - 1 : 0;
    int last = h % 2 ? 0 : W - 1;
    int step = h % 2 ? -1 : 1;
    for (int w = first; w != last; w += step)
      if (A[h][w] % 2) {
        ++A[h][w + step], --A[h][w];
        ans.emplace_back(h, w + step, h, w);
      }
    if (h != H - 1 && A[h][last] % 2) {
      ++A[h + 1][last], --A[h][last];
      ans.emplace_back(h + 1, last, h, last);
    }
  }
  cout << ans.size() << '\n';
  for (const auto& t : ans) {
    int y1, x1, y2, x2;
    tie(y1, x1, y2, x2) = t;
    ++y1, ++x1, ++y2, ++x2;
    cout << y1 << ' ' << x1 << ' ' << y2 << ' ' << x2 << '\n';
  }
}
