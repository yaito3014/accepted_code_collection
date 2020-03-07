// URL: https://atcoder.jp/contests/rcl-contest-2020-final-open/submissions/10581603
// Date: Sat, 07 Mar 2020 07:47:28 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, P, M;
  cin >> N >> P >> M;
  mt19937 mt{ 334 };
  vector<string> rows(N), sheets(N);
  for (auto& row : rows)cin >> row;
  for (auto& row : sheets)cin >> row;
  const string s = "UDLR";
  for (int i = 0; i < M; ++i) {
    cout << s[mt() % 4] << '
';
  }
}
