// URL: https://atcoder.jp/contests/hitachi2020/submissions/10675981
// Date: Sun, 08 Mar 2020 12:12:36 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B, M;
  cin >> A >> B >> M;
  vector<int> a(A), b(B);
  for (auto& e : a)cin >> e;
  for (auto& e : b)cin >> e;
  vector<int> x(M), y(M), c(M);
  for (int i = 0; i < M; ++i)
    cin >> x[i] >> y[i] >> c[i], --x[i], --y[i];
  int ma = INT_MAX, mb = INT_MAX;
  for (int i = 0; i < A; ++i)ma = min(ma, a[i]);
  for (int i = 0; i < B; ++i)mb = min(mb, b[i]);
  int ans = ma + mb;
  for (int i = 0; i < M; ++i) {
    ans = min(ans, a[x[i]] + b[y[i]] - c[i]);
  }
  cout << ans << endl;
}
