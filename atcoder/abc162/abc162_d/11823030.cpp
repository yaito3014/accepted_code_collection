// URL: https://atcoder.jp/contests/abc162/submissions/11823030
// Date: Sun, 12 Apr 2020 12:29:39 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  string S;
  cin >> S;
  // R,G,B
  const string str = "RGB";
  array<vector<int>, 3> RGB;
  fill(begin(RGB), end(RGB), vector<int>(N + 1, 0));
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < N; ++j)if (S[j] == str[i])++RGB[i][j + 1];
    partial_sum(next(begin(RGB[i])), end(RGB[i]), next(begin(RGB[i])));
  }
  int64_t ans = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      if (S[i] == S[j])continue;
      for (int k = 0; k < 3; ++k) {
        if (str[k] == S[i] || str[k] == S[j])continue;
        ans += RGB[k][N] - RGB[k][j];
        if (j + (j - i) < N && str[k] == S[j + (j - i)])--ans;
      }
    }
  }
  cout << ans << endl;
}
