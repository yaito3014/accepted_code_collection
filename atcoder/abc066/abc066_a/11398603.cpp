// URL: https://atcoder.jp/contests/abc066/submissions/11398603
// Date: Tue, 31 Mar 2020 14:37:55 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
  int a, b, c;
  std::cin >> a >> b >> c;
  std::cout << (a + b + c - std::max({ a,b,c })) << std::endl;
}
