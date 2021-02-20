// URL: https://atcoder.jp/contests/abc192/submissions/20335427
// Date: Sat, 20 Feb 2021 13:33:17 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

int main() {
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  struct Edge { u32 cost, to, k; };
  u32 n, m, x, y;
  std::cin >> n >> m >> x >> y, --x, --y;
  std::vector<std::deque<Edge>> g(n);
  for (u32 i = 0; i < m; ++i) {
    u32 a, b, t, k;
    std::cin >> a >> b >> t >> k, --a, --b;
    g[a].push_back({t, b, k});
    g[b].push_back({t, a, k});
  }
  std::priority_queue<std::pair<u64, u32>,
                      std::vector<std::pair<u64, u32>>,
                      std::greater<>> que;
  std::vector<u64> r(n, -1);
  r[x] = 0;
  que.emplace(0, x);
  while (!que.empty()) {
    auto [c, v] = que.top();
    que.pop();
    for (auto e : g[v]) {
      u32 cost = (c / e.k + !!(c % e.k)) * e.k - c + e.cost;
      if (r[e.to] <= c + cost) continue;
      que.emplace(r[e.to] = c + cost, e.to);
    }
  }
  if (r[y] == u64(-1)) std::cout << "-1" << '\n';
  else std::cout << r[y]<< '\n';
}
