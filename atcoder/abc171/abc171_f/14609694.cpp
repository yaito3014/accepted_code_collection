// URL: https://atcoder.jp/contests/abc171/submissions/14609694
// Date: Mon, 22 Jun 2020 08:25:40 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
#pragma GCC target("avx")
#pragma GCC optimize("O3")
int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int K;
  cin >> K;
  string S;
  cin >> S;
  const int N = K + S.length();
  constexpr int kMod = 1000000007;
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
  auto c = [&](int n, int r){
  	return fact[n] * inv(fact[n-r] * fact[r] % kMod) % kMod;
  };
  int ans = 0;
  for (int i = 0; i <= K; ++i) {
  	ans += modpow(26, i) * c(N-i-1, N-K-1) % kMod * modpow(25, K-i) % kMod;
  	ans %= kMod;
  }
  cout << ans << '\n';
}
