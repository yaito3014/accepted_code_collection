// URL: https://atcoder.jp/contests/joi2014yo/submissions/18449097
// Date: Sat, 28 Nov 2020 09:47:10 +0000
// Language: C++ (GCC 9.2.1)
#pragma GCC diagnostic warning "-Wall"
#include <cstdint>
#include <iostream>
#include <limits>
#include <queue>
#include <vector>

int main() {
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  constexpr u64 kInf = std::numeric_limits<u64>::max();
  u32 n, k;
  std::cin >> n >> k;
  std::vector<std::pair<u64, u32>> taxis(n);
  for (auto& [c, r] : taxis) std::cin >> c >> r;
  std::vector<std::deque<u32>> g1(n);
  for (u32 i = 0; i < k; ++i) {
    u32 a, b;
    std::cin >> a >> b, --a, --b;
    g1[a].push_back(b);
    g1[b].push_back(a);
  }
  std::vector<std::deque<std::pair<u32, u64>>> g2(n);
  {  // new graph
    std::queue<std::pair<u64, u32>> q;
    for (u32 i = 0; i < n; ++i) {
      auto [cost, roads_max] = taxis[i];
      std::vector<bool> visited(n);
      visited[i] = true;
      q.emplace(i, roads_max);
      while (!q.empty()) {
        auto [u, roads_left] = q.front();
        q.pop();
        for (auto v : g1[u]) {
          if (visited[v]) continue;
          visited[v] = true;
          g2[i].emplace_back(v, cost);
          if (roads_left > 1)
            q.emplace(v, roads_left - 1);
        }
      }
    }
  }  // new graph end
  int ans = -1;
  {  // dijkstra
    std::vector<u64> records(n, kInf);
    using P = std::pair<u64, u32>;
    std::priority_queue<P, std::vector<P>, std::greater<P>> pq;
    pq.emplace(0, 0);
    records[0] = 0;
    while (!pq.empty()) {
      auto [c, u] = pq.top();
      pq.pop();
      for (auto [v, cost] : g2[u]) {
        if (records[v] <= c + cost) continue;
        records[v] = c + cost;
        pq.emplace(c + cost, v);
      }
    }
    ans = records[n - 1];
  }  // dijkstra end
  std::cout << ans << '\n';
}
