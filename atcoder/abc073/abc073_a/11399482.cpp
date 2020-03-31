// URL: https://atcoder.jp/contests/abc073/submissions/11399482
// Date: Tue, 31 Mar 2020 15:16:05 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
  int N;
  std::cin >> N;
  bool ans = N / 10 == 9 || N % 10 == 9;
  std::cout << (ans ? "Yes" : "No") << std::endl;
}
