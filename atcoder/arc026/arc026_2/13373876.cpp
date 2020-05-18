// URL: https://atcoder.jp/contests/arc026/submissions/13373876
// Date: Mon, 18 May 2020 09:54:03 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  using ll = long long;
  ll N;
  cin >> N;
  deque<pair<ll, int>> factors;
  {
    ll n = N;
    for (ll x = 2; x * x <= n; ++x) {
      int cnt = 0;
      while (n % x == 0) {
        ++cnt;
        n /= x;
      }
      if (cnt > 0) factors.emplace_back(x, cnt);
    }
    if (n != 1) factors.emplace_back(n, 1);
  }
  auto binpow = [](auto a, auto b) {
    decltype(a) res(1);
    while (b > 0) {
      if (b % 2) res = res * a;
      a = a * a;
      b /= 2;
    }
    return res;
  };
  ll sum = 0;
  auto dfs = [](auto&& f) {
    return [=](auto&&... args) {
      return f(f, std::forward<decltype(args)>(args)...);
    };
  }([&](auto&& self, int n, ll m) -> void {
    if (n == factors.size())
      sum += m;
    else
      for (int i = 0; i <= factors[n].second; ++i)
        self(self, n + 1, m * binpow(factors[n].first, i));
  });
  dfs(0, 1);
  string ans =
      sum - N == N ? "Perfect" : sum - N < N ? "Deficient" : "Abundant";
  cout << ans << endl;
}
