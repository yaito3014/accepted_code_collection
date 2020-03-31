// URL: https://atcoder.jp/contests/abc065/submissions/11398343
// Date: Tue, 31 Mar 2020 14:28:25 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
  int X, A, B;
  std::cin >> X >> A >> B;
  std::cout << (B - A <= 0 ? "delicious" : B - A <= X ? "safe" : "dangerous") << std::endl;
}
