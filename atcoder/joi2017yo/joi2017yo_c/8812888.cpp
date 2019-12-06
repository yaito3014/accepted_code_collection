// URL: https://atcoder.jp/contests/joi2017yo/submissions/8812888
// Date: Fri, 06 Dec 2019 14:15:28 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M, D;
  cin >> N >> M >> D;
  vector<string> field(N);
  for (auto& row : field)cin >> row;
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    int c = 0;
    for (int j = 0; j < M; ++j) {
      if (field[i][j] == '.')++c;
      else {
        if (c >= D)ans += c - D + 1;
        c = 0;
      }
    }
    if (c >= D)ans += c - D + 1;
  }
  for (int i = 0; i < M; ++i) {
    int c = 0;
    for (int j = 0; j < N; ++j) {
      if (field[j][i] == '.')++c;
      else {
        if (c >= D)ans += c - D + 1;
        c = 0;
      }
    }
    if (c >= D)ans += c - D + 1;
  }
  cout << ans << endl;
}
