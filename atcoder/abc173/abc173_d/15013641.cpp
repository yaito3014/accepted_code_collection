// URL: https://atcoder.jp/contests/abc173/submissions/15013641
// Date: Sun, 05 Jul 2020 13:29:15 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  std::vector<int> A(N);
  for (auto& e : A) std::cin >> e;
  std::sort(rbegin(A), rend(A));
  std::map<int, int, std::greater<int>> m;
  ++m[A[0]];
  long long ans = 0;
  for (int i = 1; i < N; ++i) {
    ans += cbegin(m)->first;
    --begin(m)->second;
    m[A[i]] += 2;
    if (cbegin(m)->second == 0) m.erase(cbegin(m));
  }
  std::cout << ans << '\n';
}
