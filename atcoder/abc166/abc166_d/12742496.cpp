// URL: https://atcoder.jp/contests/abc166/submissions/12742496
// Date: Sun, 03 May 2020 12:37:01 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr); ios::sync_with_stdio(false);
  using ll = long long;
  int X;
  cin >> X;
  auto pow5 = [](ll n) -> ll { return n * n * n * n * n; };
  auto get_root5 = [=](ll n)-> optional<int> {
    int i = -1000;
    for (; i < 1000; ++i) {
      if (pow5(i) != n)continue;
      return make_optional(i);
    }
    return nullopt;
  };
  for (int A = 0; A <= X; ++A) {
    ll Bp5 = pow5(A) - X;
    auto opt = get_root5(Bp5);
    if (!opt.has_value())continue;
    cout << A << ' ' << opt.value() << endl;
    break;
  }
}
