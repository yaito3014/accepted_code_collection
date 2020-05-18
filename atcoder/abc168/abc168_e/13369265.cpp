// URL: https://atcoder.jp/contests/abc168/submissions/13369265
// Date: Mon, 18 May 2020 06:48:14 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  using ll = long long;
  using P = pair<ll, ll>;
  constexpr int MOD = 1000000007;
  auto normalize = [](const P& p){
  	auto [A, B] = p;
  	if (A == 0) B = abs(B);
  	else if (B == 0) A = abs(A);
  	else if (B < 0) A *= -1, B *= -1;
  	return make_pair(A, B);
  };
  auto modpow = [&](ll a, int n) -> int {
  	ll res{1};
  	while (n > 0) {
  		if (n % 2 == 1) res = res * a % MOD;
  		a = a * a % MOD;
  		n /= 2;
  	}
  	return res;
  };
  int N;
  cin >> N;
  vector<P> AB(N);
  for (auto& [A, B] : AB) {
  	cin >> A >> B;
  	ll g = gcd(A, B);
  	if(g == 0) continue;
  	A /= g, B /= g;
  	if (A == 0) B = abs(B);
  	else if (B == 0) A = abs(A);
  	else if (B < 0) A *= -1, B *= -1;
  }
  map<pair<ll, ll>, int> m;
  for (const auto& p : AB) ++m[p];
  ll ans = 1;
  int zeros = m[make_pair(0ll, 0ll)];
  m.erase(make_pair(0ll, 0ll));
  while (!m.empty()) {
  	auto[p, c] = *begin(m);
  	const auto& [A, B] = p;
  	auto iter = m.find(normalize(make_pair(-B, A)));
  	ll op = 
  		iter == m.end() ? modpow(2, c) :
  		(modpow(2, c) + modpow(2, iter->second) - 1) % MOD;
  	ans = ans * op % MOD;
  	if (iter != begin(m) && iter != end(m)) m.erase(iter);
  	m.erase(begin(m));
  }
  ans = (ans + zeros - 1 + MOD) % MOD;
  cout << ans << endl;
}
