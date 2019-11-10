// URL: https://atcoder.jp/contests/nikkei2019-2-qual/submissions/8378066
// Date: Sun, 10 Nov 2019 02:43:05 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

constexpr int64_t Mod = 998244353;

int64_t modpow(int64_t a, int64_t b, int64_t c = 1) {
    if (b == 0)return c;
    if (b % 2)c = a * c % Mod;
    return modpow(a * a % Mod, b / 2, c);
}

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> D(N);
  for (auto& v : D)cin >> v;
  int M = *max_element(begin(D), end(D));
  vector<int> t(M + 1, 0);
  for (auto& v : D)++t[v];
  if (D[0] != 0 || t[0] != 1) {
    cout << 0 << endl;
    return 0;
  }
  int64_t ans = 1;
  for (int i = 0; i < M; ++i)
    ans = ans * modpow(t[i], t[i + 1]) % Mod;
  cout << ans << endl;
}
