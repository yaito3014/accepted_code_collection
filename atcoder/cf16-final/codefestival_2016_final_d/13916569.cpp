// URL: https://atcoder.jp/contests/cf16-final/submissions/13916569
// Date: Mon, 01 Jun 2020 06:29:07 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  constexpr int kMod = 998244353;
  int N, M;
  cin >> N >> M;
  vector<int> X(N);
  for (auto& e : X) cin >> e;
  long long sum = 0;
  map<int, long long> m;
  vector<set<int>> rec(M);
  for (const auto& e : X) ++m[e], rec[e % M].insert(e);
  auto op = [&](long long a, int b) {
  	//cerr << "[op] a : " << a << ", b : " << b << ", m[b] : " << m[b] << '\n';
  	return a + m[b];
  };
  for (int i = 1; i < M / 2 + M % 2; ++i) {
  	int j = i, k = M - i;
  	auto a = accumulate(cbegin(rec[j]), cend(rec[j]), 0ll, op);
  	auto b = accumulate(cbegin(rec[k]), cend(rec[k]), 0ll, op);
  	if (b < a) swap(a, b), swap(j, k);
  	sum += a;
  	for (const auto& e : rec[k]) {
  		long long c = m[e];
  		if (b - a >= 2) {
  			int t = min(c, b - a) / 2;
  			b -= t * 2;
  			sum += t;
  		}
  	}
  }
  sum += accumulate(cbegin(rec[0]), cend(rec[0]), 0ll, op) / 2;
  if (M % 2 == 0)
    sum += accumulate(cbegin(rec[M / 2]), cend(rec[M / 2]), 0ll, op) / 2;
  cout << sum << endl;
}
