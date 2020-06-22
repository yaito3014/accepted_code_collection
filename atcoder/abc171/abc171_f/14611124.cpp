// URL: https://atcoder.jp/contests/abc171/submissions/14611124
// Date: Mon, 22 Jun 2020 09:25:46 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  int K;
  cin >> K;
  string S;
  cin >> S;
  const int N = K + S.length();
  constexpr long long kMod = 1000000007;
  auto modpow = [&](long long a, int b) {
  	long long r = 1;
  	for (; b > 0; b /= 2) {
  		if (b % 2) r = r * a % kMod;
  		a = a * a % kMod;
  	}
  	return r;
  };
  auto inv = [&](int a) { return modpow(a, kMod - 2); };
  vector<long long> fact(N + 1, 1);
  for (int i = 0; i < N; ++i) fact[i + 1] = fact[i] * (i + 1) % kMod;
  vector<long long> inv_fact(N + 1);
  inv_fact[N] = inv(fact[N]);
  for (int i = N; i > 0; --i) inv_fact[i-1] = inv_fact[i] * i % kMod;
  auto c = [&](int n, int r){
  	return fact[n] * inv_fact[n-r] % kMod * inv_fact[r] % kMod;
  };
  long long m25 = 1;
  long long ans = 1;
  for (int i = 1; i <= K; ++i) {
  	m25 = m25 * 25 % kMod;
  	ans += c(N, i) % kMod * m25 % kMod;
  	if (ans > kMod) ans -= kMod;
  }
  cout << ans << '\n';
}
