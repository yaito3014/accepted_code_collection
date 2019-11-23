// URL: https://atcoder.jp/contests/ddcc2020-qual/submissions/8581543
// Date: Sat, 23 Nov 2019 12:55:46 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int H, W, K;
  cin >> H >> W >> K;
  vector<string> s(H);
  for (auto& v : s)cin >> v;
  vector<vector<int>> ans(H, vector<int>(W, 0));
  int k = 0;
  for (int h = 0; h < H; ++h) {
    size_t pos = s[h].find('#');
    int prev = -1;
    while (pos != string::npos) {
      ++k;
      for (int i = prev + 1; i <= pos; ++i)ans[h][i] = k;
      prev = pos;
      pos = s[h].find('#', prev + 1);
    }
    if (prev != -1)for (int i = prev + 1; i < W; ++i)ans[h][i] = k;
  }
  for (int h = 1; h < H; ++h) {
    if (ans[h][0] != 0)continue;
    ans[h] = ans[h - 1];
  }
  for (int h = H - 2; h >= 0; --h) {
    if (ans[h][0] != 0)continue;
    ans[h] = ans[h + 1];
  }
  for (auto& row : ans) {
    for (auto& elem : row) {
      cout << elem << " ";
    }
    cout << "
";
  }
  cout << flush;
}
