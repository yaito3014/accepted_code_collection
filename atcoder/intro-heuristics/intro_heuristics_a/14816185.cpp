// URL: https://atcoder.jp/contests/intro-heuristics/submissions/14816185
// Date: Sun, 28 Jun 2020 13:15:54 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int D;
  cin >> D;
  array<int, 26> c;
  for (auto& e : c) cin >> e;
  vector<array<int, 26>> d(D);
  for (auto& r : d)
    for (auto& e : r) cin >> e;
  for (int i = 0; i < D; ++i) cout << (i % 26) + 1 << '\n';
}
