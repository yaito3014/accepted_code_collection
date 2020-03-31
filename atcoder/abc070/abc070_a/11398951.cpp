// URL: https://atcoder.jp/contests/abc070/submissions/11398951
// Date: Tue, 31 Mar 2020 14:52:31 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
  int N;
  std::cin >> N;
  std::cout << (N / 100 == N % 10 ? "Yes" : "No") << std::endl;
}
