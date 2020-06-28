// URL: https://atcoder.jp/contests/intro-heuristics/submissions/14821105
// Date: Sun, 28 Jun 2020 13:52:17 +0000
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
  mt19937 mt(random_device{}());
  uniform_int_distribution<int> dist_type(0, 25), dist_day(0, D - 1);
  uniform_real_distribution<> dist(0, 1);
  double eps = 0.1;
  vector<int> t(D);
  for (int i = 0; i < D; ++i) t[i] = i % 26;
  int S = eval(t);
  int cnt = 0;
  while (clock.now() - be < 1950ms) {
    bool f = dist(mt) < eps / (cnt / 100);
    int day1 = dist_day(mt);
    int day2 = dist_day(mt);
    int prv = 0;
    if (f) {
      prv = t[day1];
      t[day1] = dist_type(mt);
    } else
      swap(t[day1], t[day2]);
    int score = eval(t);
    if (score > S) {
      S = score;
      continue;
    }
    if (f)
      t[day1] = prv;
    else
      swap(t[day1], t[day2]);
  }
  for (const auto& e : t) cout << (e + 1) << '\n';
}
