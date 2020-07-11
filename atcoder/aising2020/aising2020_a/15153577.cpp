// URL: https://atcoder.jp/contests/aising2020/submissions/15153577
// Date: Sat, 11 Jul 2020 12:08:22 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <iostream>

int main() {
  int L, R, d;
  std::cin >> L >> R >> d;
  int ans = 0;
  for (int i = L; i <= R; ++i)
    if (i % d == 0) ++ans;
  std::cout << ans << '\n';
}
