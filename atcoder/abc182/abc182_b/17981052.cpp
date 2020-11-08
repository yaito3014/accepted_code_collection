// URL: https://atcoder.jp/contests/abc182/submissions/17981052
// Date: Sun, 08 Nov 2020 12:58:13 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  std::vector<int> A(N);
  for (auto& e : A) std::cin >> e;
  int m = *std::max_element(cbegin(A), cend(A));
  int gcd = 0;
  int ans = 0;
  for (int k = 2; k <= m; ++k) {
    int c = std::count_if(cbegin(A), cend(A),
                          [=](int n){ return n % k == 0; });
    if (gcd <= c) {
      gcd = c;
      ans = k;
    }
  }
  std::cout << ans << '\n';
}
