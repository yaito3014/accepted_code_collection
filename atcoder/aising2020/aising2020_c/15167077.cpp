// URL: https://atcoder.jp/contests/aising2020/submissions/15167077
// Date: Sat, 11 Jul 2020 12:44:59 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <iostream>
#include <set>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  std::vector<int> ans(N, 0);
  using ll = long long;
  auto f = [](ll x, ll y, ll z) {
    return x * x + y * y + z * z + x * y + y * z + z * x;
  };
  for (ll x = 1; x <= N; ++x)
    for (ll y = 1; y <= x && f(x, y, 1) <= N; ++y)
      for (ll z = 1; z <= y; ++z) {
        ll n = f(x, y, z);
        if (n > N) continue;
        int k = std::set<long long>{x, y, z}.size();
        ans[n - 1] += k == 3 ? 6 : k == 2 ? 3 : 1;
      }
  for (const auto& e : ans) std::cout << e << '\n';
}
