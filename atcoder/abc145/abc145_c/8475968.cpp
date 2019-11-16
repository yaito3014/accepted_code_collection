// URL: https://atcoder.jp/contests/abc145/submissions/8475968
// Date: Sat, 16 Nov 2019 12:29:02 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

struct Pos {
  int x, y;
  Pos() = default;
  Pos(int x_, int y_)
    : x(x_), y(y_) {}
};


int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<Pos> cities(N);
  for (auto& v : cities)cin >> v.x >> v.y;
  vector<int> per(N);
  iota(begin(per), end(per), 0);
  auto calc = [](const Pos& a, const Pos& b) -> double {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
  };
    double distance = 0;
  int n = 0;
  do {
    for (int i = 0; i < N - 1; ++i)
      distance += calc(cities[per[i]], cities[per[i + 1]]);
    ++n;
  } while (next_permutation(begin(per), end(per)));
  cout << fixed << setprecision(7) << distance / n << endl;
}
