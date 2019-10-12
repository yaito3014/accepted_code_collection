// URL: https://atcoder.jp/contests/abc034/submissions/7950212
// Date: Sat, 12 Oct 2019 13:31:12 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

constexpr int Mod = 1000000007;

int powM_impl(int64_t a, int n, int64_t c) {
  if (n == 0)return c;
  if (n == 1)return a * c % Mod;
  if (n % 2)c = c * a % Mod;
  return powM_impl(a * a % Mod, n / 2, c);
}

int powM(int64_t a, int n) {
  return powM_impl(a, n, 1);
}

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int W, H;
  cin >> W >> H;
  vector<int64_t> fact(W + H + 1, 1);
  for (int64_t i = 0; i < W + H; ++i)
    fact[i + 1] = fact[i] * (i + 1) % Mod;
  int64_t ans = fact[W + H - 2] * powM(fact[min(W, H) - 1] * fact[W + H - 1 - min(W, H)] % Mod, Mod - 2) % Mod;
  cout << ans << endl;
}
