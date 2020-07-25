// URL: https://atcoder.jp/contests/m-solutions2020/submissions/15435076
// Date: Sat, 25 Jul 2020 12:35:58 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <iostream>

int main() {
  int A, B, C;
  std::cin >> A >> B >> C;
  int K;
  std::cin >> K;
  for (int i = 0; i < K; ++i) 
    if (A >= B)
      B *= 2;
    else if (B >= C)
      C *= 2;
  std::cout << (A < B && B < C ? "Yes":"No") << '\n';
}
