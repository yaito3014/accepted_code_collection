// URL: https://atcoder.jp/contests/abc065/submissions/21221333
// Date: Wed, 24 Mar 2021 10:44:47 +0000
// Language: C++ (GCC 9.2.1)
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
  using u32 = uint32_t;
  u32 n;
  std::cin >> n;
  std::vector<u32> a(n);
  for (auto& e : a) std::cin >> e, --e;
  std::vector<bool> v(n, false);
  u32 ans = 0;
  for (u32 cur = 0; cur!=1; cur = a[cur]) {
    if (v[cur]) {
      std::cout << -1 << '\n';
      return 0;
    }
    v[cur] = true;
    ++ans;
  }
  std::cout << ans << '\n';
}
