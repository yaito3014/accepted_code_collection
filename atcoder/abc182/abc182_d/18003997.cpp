// URL: https://atcoder.jp/contests/abc182/submissions/18003997
// Date: Sun, 08 Nov 2020 22:44:41 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  std::vector<long long> A(N + 1, 0), B(N + 1);
  for (int i = 1; i <= N; ++i) std::cin >> A[i];
  std::inclusive_scan(cbegin(A), cend(A), begin(A));
  auto max = [](const auto& x, const auto& y) { return std::max(x, y); };
  std::inclusive_scan(cbegin(A), cend(A), begin(B), max);
  long long ans = 0, p = 0;
  for (int i = 1; i <= N; ++i) {
    ans = max(ans, p + B[i]);
    p += A[i];
  }
  std::cout << ans << '\n';
}
