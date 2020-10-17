// URL: https://atcoder.jp/contests/abc180/submissions/17458391
// Date: Sat, 17 Oct 2020 11:30:19 +0000
// Language: C++ (GCC 9.2.1)
#include <iostream>
#include <set>

int main() {
  using ll = long long;
  ll n;
  std::cin >> n;
  std::set<ll> s;
  for (ll i = 1; i * i <= n; ++i)
    if (n % i == 0) s.insert(i), s.insert(n / i);
  for (const auto& e : s) std::cout << e << '\n';
}
