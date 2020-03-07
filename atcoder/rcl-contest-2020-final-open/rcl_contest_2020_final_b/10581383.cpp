// URL: https://atcoder.jp/contests/rcl-contest-2020-final-open/submissions/10581383
// Date: Sat, 07 Mar 2020 07:40:21 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, P, M;
  cin >> N >> P >> M;
  vector<string> rows(N), sheets(N);
  for (auto& row : rows)cin >> row;
  for (auto& row : sheets)cin >> row;
  const string s = "UDLR";
  for (int i = 0; i < M; ++i) {
    cout << s[i % 4] << '\n';
  }
}
