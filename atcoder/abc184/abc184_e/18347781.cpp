// URL: https://atcoder.jp/contests/abc184/submissions/18347781
// Date: Sun, 22 Nov 2020 14:13:54 +0000
// Language: C++ (GCC 9.2.1)
#include <array>
#include <iostream>
#include <limits>
#include <queue>
#include <set>
#include <string>
#include <vector>

int main() {
  constexpr int kInf = std::numeric_limits<int>::max();
  constexpr std::array<int, 5> kD = {{ 0, 1, 0, -1 ,0 }};
  int h, w;
  std::cin >> h >> w;
  std::vector<std::string> g(h);
  for(auto& r : g) std::cin >> r;
  
  using P = std::pair<int, int>;
  using Q = std::pair<int, P>;
  std::array<std::set<P>, 'z' - 'a' + 1> t;
  std::priority_queue<Q, std::vector<Q>, std::greater<>> pq;
  std::vector<std::vector<int>> m(h, std::vector<int>(w, kInf));
  
  int gr, gc;
  for (int r = 0; r < h; ++r)
    for (int c = 0; c < w; ++c) {
      if (g[r][c] == 'S') {
        pq.emplace(0, P(r, c));
        m[r][c] = 0;
      } else if (g[r][c] == 'G') {
      	gr = r, gc = c;
      } else if ('a' <= g[r][c] && g[r][c] <= 'z')
        t[g[r][c] - 'a'].emplace(r, c);
    }
  while (!pq.empty()) {
    auto [cost, pos] = pq.top();
    auto [r, c] = pos;
    pq.pop();
    for (int d = 0; d < 4; ++d) {
      int nr = r + kD[d];
      int nc = c + kD[d + 1];
      if (nr < 0 || h <= nr || nc < 0 || w <= nc) continue;
      if (g[nr][nc] == '#') continue;
      if (m[nr][nc] <= cost + 1) continue;
      m[nr][nc] = cost + 1;
      pq.emplace(cost + 1, P(nr, nc));
    }
    if (g[r][c] < 'a' || 'z' < g[r][c]) continue;
    t[g[r][c] - 'a'].erase(P(r, c));
    for (auto [nr, nc] : t[g[r][c] - 'a']) {
      if (m[nr][nc] <= cost + 1) continue;
      m[nr][nc] = cost + 1;
      pq.emplace(cost + 1, P(nr, nc));
    }
    t[g[r][c] - 'a'].clear();
  }
  int ans = m[gr][gc] == kInf ? -1 : m[gr][gc];
  std::cout << ans << '\n';
}
