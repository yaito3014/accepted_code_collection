// URL: https://atcoder.jp/contests/abc030/submissions/6800471
// Date: Sat, 10 Aug 2019 11:47:40 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int X, Y;
  cin >> X >> Y;
  vector<int> a(N), b(M);
  for (auto& v : a)cin >> v;
  for (auto& v : b)cin >> v;
  int ans = 0;
  int i = 0, j = 0;
  while (i < N && j < M) {
    while (i < N && j < M && b[j] < a[i] + X)++j;
    while (i < N && j < M && a[i] < b[j] + Y)++i;
    if (j<M)++ans;
  }
  cout << ans << endl;
}
