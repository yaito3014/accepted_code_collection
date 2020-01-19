// URL: https://atcoder.jp/contests/abc152/submissions/9624251
// Date: Sun, 19 Jan 2020 13:05:10 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  array<array<int, 10>, 10> table = {};
  for (int i = 1; i <= N; ++i) {
    int d = log10(i) + 1;
    ++table[i / (int)pow(10, d - 1)][i % 10];
  }
  int ans = 0;
  for (int i = 1; i <= 9; ++i)
    for (int j = 1; j <= 9; ++j) {
      ans += table[i][j] * table[j][i];
    }
  cout << ans << endl;
}
