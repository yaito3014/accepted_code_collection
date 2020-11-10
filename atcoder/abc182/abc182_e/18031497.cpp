// URL: https://atcoder.jp/contests/abc182/submissions/18031497
// Date: Tue, 10 Nov 2020 11:41:22 +0000
// Language: C++ (GCC 9.2.1)
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <tr2/dynamic_bitset>
#include <vector>

int main() {
  int h, w, n, m;
  scanf("%d%d%d%d", &h, &w, &n, &m);
  std::vector lights(h, std::tr2::dynamic_bitset(w, 0));
  auto blocks = lights, dest = lights;
  for (auto& e : blocks) e = ~e;
  int r, c;
  for (int i = 0; i < n; ++i) {
    scanf("%d%d", &r, &c);
    dest[r - 1][c - 1] = lights[r - 1][c - 1] = true;
  }
  for (int i = 0; i < m; ++i) {
    scanf("%d%d", &r, &c);
    blocks[r - 1][c - 1] = false;
  }
  
  auto f = lights[0];
  for (r = 1; r < h; ++r)
    dest[r] |= ((f &= blocks[r]) |= lights[r]);
  f = lights[h - 1];
  for (r = 1; r <= h; ++r)
    dest[h - r] |= ((f &= blocks[h - r]) |= lights[h - r]);
  for (r = 0; r < h; ++r) {
    f = lights[r];
    for (c = 0; c < w; ++c)
      dest[r] |= ((f <<= 1) &= blocks[r]);
    f = lights[r];
    for (c = 0; c < w; ++c)
      dest[r] |= ((f >>= 1) &= blocks[r]);
  }
  int res = 0;
  for (const auto& e : dest) res += e.count();
  printf("%d\n", res);
}
