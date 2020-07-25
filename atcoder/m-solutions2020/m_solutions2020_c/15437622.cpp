// URL: https://atcoder.jp/contests/m-solutions2020/submissions/15437622
// Date: Sat, 25 Jul 2020 12:43:55 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <iostream>
#include <vector>
int main() {
  int N, K;
  std::cin >> N >> K;
  std::vector<int> A(N);
  for (auto& e : A) std::cin >> e;
  for (int i = K; i < N; ++i)
    std::cout << (A[i - K] < A[i] ? "Yes" : "No") << '\n';
}
