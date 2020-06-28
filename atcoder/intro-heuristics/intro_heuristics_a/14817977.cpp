// URL: https://atcoder.jp/contests/intro-heuristics/submissions/14817977
// Date: Sun, 28 Jun 2020 13:29:46 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#pragma GCC optimize("avx")
#pragma GCC optimize("Ofast")
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
  mt19937 mt(random_device{}());
  uniform_int_distribution<int> dist_type(0, 25), dist_day(0, D - 1);
  vector<int> t(D);
  for (int i = 0; i < D; ++i) t[i] = i % 26;
  int S = eval(t);
  while (clock.now() - be < 1950ms) {
    int day = dist_day(mt);
    int prv = t[day];
    t[day] = dist_type(mt);
    int score = eval(t);
    if (score > S) {
      S = score;
      continue;
    }
    t[day] = prv;
  }
  for (const auto& e : t) cout << (e + 1) << '\n';
}
