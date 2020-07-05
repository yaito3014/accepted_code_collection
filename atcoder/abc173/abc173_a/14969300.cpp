// URL: https://atcoder.jp/contests/abc173/submissions/14969300
// Date: Sun, 05 Jul 2020 12:03:34 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <iostream>

int main() {
  int N;
  std::cin >> N;
  std::cout << ((N / 1000 + (N % 1000 ? 1 : 0)) * 1000 - N) << '\n';
}
