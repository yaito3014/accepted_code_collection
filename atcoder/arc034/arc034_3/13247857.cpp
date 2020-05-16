// URL: https://atcoder.jp/contests/arc034/submissions/13247857
// Date: Sat, 16 May 2020 05:30:16 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  using ll = long long;
  int A, B;
  cin >> A >> B;
  map<int, ll> divisors;
  for(int i = B + 1; i <= A; ++i) {
  	int n = i;
  	for(int j = 2; j * j <= n; ++j)
  		while(n % j == 0)++divisors[j], n /= j;
  	if(n != 1)++divisors[n];
  }
  ll ans = 1;
  for(const auto& p : divisors)
  	ans = ans * (p.second + 1) % 1000000007;
  cout << ans << endl;
}
