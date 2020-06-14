// URL: https://atcoder.jp/contests/abc170/submissions/14310298
// Date: Sun, 14 Jun 2020 12:17:21 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int X, N;
  cin >> X >> N;
  vector<int> p(N);
  for (auto& e : p) cin >> e;
  sort(begin(p), end(p));
  int m = INT_MAX, ans = INT_MAX;
  for (int i = -100; i <= 100; ++i) {
    if (binary_search(cbegin(p), cend(p), X + i)) continue;
    if (m <= abs(i)) continue;
    m = abs(i);
    ans = X + i;
  }
  cout << ans << '\n';
}
