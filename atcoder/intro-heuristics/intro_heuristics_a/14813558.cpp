// URL: https://atcoder.jp/contests/intro-heuristics/submissions/14813558
// Date: Sun, 28 Jun 2020 12:54:57 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  using namespace chrono_literals;
  chrono::high_resolution_clock clock;
  auto be = clock.now();
  int D;
  cin >> D;
  array<int, 26> c;
  for (auto& e : c) cin >> e;
  vector<array<int, 26>> d(D);
  for (auto& r : d)
    for (auto& e : r) cin >> e;
  auto eval = [&](vector<int> t) {
    int S = 0;
    array<int, 26> last = {};
    for (int i = 0; i < D; ++i) {
      S += d[i][t[i]];
      last[t[i]] = i + 1;
      for (int j = 0; j < 26; ++j) S -= c[j] * (i + 1 - last[j]);
    }
    return S;
  };
  vector<int> t(D);
  for (int i = 0; i < D; ++i)
    t[i] = distance(cbegin(d[i]), max_element(cbegin(d[i]), cend(d[i]))) + 1;
  for (const auto& e : t) cout << e << '\n';
}
