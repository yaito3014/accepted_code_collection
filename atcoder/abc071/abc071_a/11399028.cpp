// URL: https://atcoder.jp/contests/abc071/submissions/11399028
// Date: Tue, 31 Mar 2020 14:55:25 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
  int x, a, b;
  std::cin >> x >> a >> b;
  std::cout << (std::abs(x - a) < std::abs(x - b) ? 'A' : 'B') << std::endl;
}
