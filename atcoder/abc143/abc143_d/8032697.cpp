// URL: https://atcoder.jp/contests/abc143/submissions/8032697
// Date: Sat, 19 Oct 2019 12:22:03 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int N;
  cin >> N;
  vector<int> L(N);
  for (auto& v : L)cin >> v;
  sort(begin(L), end(L));
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      auto itr = lower_bound(begin(L), begin(L) + i, L[i] + L[j]);
      if (itr == end(L))continue;
      auto itr2 = upper_bound(begin(L), begin(L) + i, L[j] - L[i]);
      if (itr2 == end(L))continue;
      ans += distance(itr2, itr);
    }
  }
  cout << ans << endl;
}
