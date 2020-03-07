// URL: https://atcoder.jp/contests/rcl-contest-2020-final-open/submissions/10577810
// Date: Sat, 07 Mar 2020 05:34:26 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  array<int, 6> dice = { { 1, 2, 3, 4, 5, 6 } };
  vector<int> field(N + 1, 0);
  int read_count = 0;
  for (int i = 0; i < M; ++i) {
    for (const auto& e : dice)cout << e << " ";
    cout << endl;
    int d, v, x;
    cin >> d >> v >> x;
    field[x] = v;
    if (i < 5)dice[i + 1] = 1;
    else if (read_count < M)++read_count;
  }
}
