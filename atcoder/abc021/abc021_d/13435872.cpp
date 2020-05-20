// URL: https://atcoder.jp/contests/abc021/submissions/13435872
// Date: Wed, 20 May 2020 14:38:40 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  using ll = long long;
  int N, K;
  cin >> N >> K;
  constexpr int MOD = 1000000007;
  auto modpow = [&](ll a, int b) {
  	ll res(1);
  	while (b > 0) {
  		if (b % 2 == 1) res = res * a % MOD;
  		a = a * a % MOD;
  		b /= 2;
  	}
  	return res;
  };
  auto modinv = [&](int n){ return modpow(n, MOD - 2); };
  vector<ll> modfact(N + K + 1, 1);
  for (int i = 0; i < N + K; ++i)
    modfact[i + 1] = modfact[i] * (i + 1) % MOD;
  auto comb = [&](int n, int r) {
  	return modfact[n] * modinv(modfact[n-r] * modfact[r] % MOD) % MOD;
  };
  auto rep_comb = [&](int n, int r) { return comb(n + r - 1, r); };
  cout << rep_comb(N, K) << endl;
}
