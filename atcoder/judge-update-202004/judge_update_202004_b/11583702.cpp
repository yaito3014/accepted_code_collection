// URL: https://atcoder.jp/contests/judge-update-202004/submissions/11583702
// Date: Sun, 05 Apr 2020 12:08:02 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  using P = pair<int, char>;
  vector<P> balls(N);
  for (auto& [X, C] : balls)cin >> X >> C;
  sort(begin(balls), end(balls), [](P& a, P& b) {
    auto [x1, c1] = a;
    auto [x2, c2] = b;
    return c1 == c2 ? x1 < x2 : c1 > c2;
    });
  for (auto& [x, c] : balls) {
    cout << x << "
";
  }
}
