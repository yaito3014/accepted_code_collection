// URL: https://atcoder.jp/contests/arc080/submissions/13955134
// Date: Tue, 02 Jun 2020 12:40:37 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int H, W;
  cin >> H >> W;
  int N;
  cin >> N;
  deque<int> A;
  copy_n(istream_iterator<int>(cin), N, back_inserter(A));
  vector<vector<int>> grid(H, vector<int>(W));
  for (int h = 0, color = 1; h < H; ++h)
    for (int w = 0; w < W; ++w) {
      grid[h][h % 2 ? W - 1 - w : w] = color;
      if (--A.front() == 0) A.pop_front(), ++color;
    }
  for (const auto& row : grid) {
  	for (const auto& e : row) cout << e << ' ';
  	cout << '\n';
  }
}
