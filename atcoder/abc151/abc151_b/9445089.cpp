// URL: https://atcoder.jp/contests/abc151/submissions/9445089
// Date: Sun, 12 Jan 2020 12:04:51 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, K, M;
  cin >> N >> K >> M;
  vector<int> A(N-1);
  for (auto& v : A)cin >> v;
  int sum = accumulate(begin(A), end(A), 0);
  int ans = -1;
  if (M * N - sum <= K)ans = max(M * N - sum, 0);
  cout << ans << endl;
}
