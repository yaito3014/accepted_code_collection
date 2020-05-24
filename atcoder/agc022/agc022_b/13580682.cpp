// URL: https://atcoder.jp/contests/agc022/submissions/13580682
// Date: Sun, 24 May 2020 15:37:35 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  constexpr array<array<int, 8>, 2> kNum = {
      {{{2, 10, 3, 9, 4, 8, 6, 12}}, {{6, 2, 10, 3, 9, 4, 8, 12}}}};
  set<int> ans;
  if (N == 3)
    ans.insert({2, 5, 63});
  else
    for (int i = 0; i < N; ++i) ans.insert(kNum[N % 2][i % 8] + i / 8 * 12);
  for (const auto& e : ans) cout << e << ' ';
  cout << '
';
}
