// URL: https://atcoder.jp/contests/aising2020/submissions/15155380
// Date: Sat, 11 Jul 2020 12:10:53 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <iostream>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  int ans = 0;
  for (int i = 1; i <= N; ++i) {
    int a;
    std::cin >> a;
    if (i % 2 && a % 2) ++ans;
  }
  std::cout << ans << '\n';
}
