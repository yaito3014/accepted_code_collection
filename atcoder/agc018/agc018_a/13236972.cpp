// URL: https://atcoder.jp/contests/agc018/submissions/13236972
// Date: Fri, 15 May 2020 15:33:25 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  auto gcd = [](auto&& f) {
    return [&](auto&&... args) {
      return f(f, std::forward<decltype(args)>(args)...);
    };
  }([](auto&& self, int a, int b) -> int {
    return b ? self(self, b, a % b) : a;
  });
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (auto& e : A) cin >> e;
  int g = 0;
  for (auto& e : A) g = gcd(g, e);
  int m = *max_element(cbegin(A), cend(A));
  cout << (g == gcd(K, g) && K <= m ? "POSSIBLE" : "IMPOSSIBLE") << endl;
}
