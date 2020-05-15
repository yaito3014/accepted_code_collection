// URL: https://atcoder.jp/contests/abc147/submissions/13236608
// Date: Fri, 15 May 2020 15:18:03 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  constexpr int Mod = 1'000'000'007;
  int N;
  cin >> N;
  vector<long long> A(N);
  for (auto& e : A) cin >> e;
  int ans = 0;
  for (int i = 0; i < 60; ++i) {
    array<long long, 2> count = {};
    for (const auto& e : A) ++count[(e >> i) & 1];
    ans += count[0] * count[1] % Mod * ((1LL << i) % Mod) % Mod;
    ans %= Mod;
  }
  cout << ans << endl;
}
