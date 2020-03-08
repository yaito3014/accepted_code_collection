// URL: https://atcoder.jp/contests/abc036/submissions/10658705
// Date: Sun, 08 Mar 2020 05:53:51 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<string> s(N);
  for (auto& row : s)cin >> row;
  vector<string> rotated = s;
  for (int i = 0; i < N; ++i)
    for (int j = 0; j < N; ++j)
      rotated[i][j] = s[N - j - 1][i];
  for (const auto& row : rotated)cout << row << '\n';
}
