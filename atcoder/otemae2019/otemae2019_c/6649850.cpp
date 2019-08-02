// URL: https://atcoder.jp/contests/otemae2019/submissions/6649850
// Date: Fri, 02 Aug 2019 12:10:54 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> a(N), b(N);
  for (auto& v : a)cin >> v;
  for (auto& v : b)cin >> v;
  map<int, int> ma, mb;
  for (auto& v : b)++mb[v];
  int ans = INT_MAX;
  for (int i = 0; i < N; ++i) {
    ans = min(ans, mb[a[i]] / ++ma[a[i]]);
    cout << ans << "\n";
  }
}
