// URL: https://atcoder.jp/contests/abc155/submissions/10141837
// Date: Sun, 16 Feb 2020 12:13:41 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<string> S(N);
  for (auto& e : S)cin >> e;
  map<string, int> m;
  int M = 0;
  for (auto& e : S)
    M = max(M,++m[e]);
  auto iter = m.begin();
  auto last = m.end();
  for (; iter != last; ++iter) {
    if (iter->second != M)continue;
    cout << iter->first << "\n";
  }
}
