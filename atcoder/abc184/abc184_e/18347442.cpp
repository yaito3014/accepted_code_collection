// URL: https://atcoder.jp/contests/abc184/submissions/18347442
// Date: Sun, 22 Nov 2020 14:09:23 +0000
// Language: C++ (GCC 9.2.1)
#include <array>
#include <iomanip>
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
  std::queue<P> q;
  std::vector<bool> v(h  *w, false);
  std::vector<int> m(h  *w, kInf);
  
  int gr = 0, gc = 0;
  for (int r = 0; r < h; ++r)
    for (int c = 0; c < w; ++c) {
      if (g[r][c] == 'S') {
        q.emplace(r, c);
        m[r * w + c] = 0;
        v[r * w + c] = true;
      } else if (g[r][c] == 'G') {
      	gr = r, gc = c;
      } else if ('a' <= g[r][c] && g[r][c] <= 'z')
        t[g[r][c] - 'a'].emplace(r, c);
    }
  while (!q.empty()) {
  	auto [r, c] = q.front();
    q.pop();
    for (int d = 0; d < 4; ++d) {
      int nr = r + kD[d];
      int nc = c + kD[d + 1];
      if (nr < 0 || h <= nr || nc < 0 || w <= nc) continue;
      if (g[nr][nc] == '#') continue;
      if (v[nr * w + nc]) continue;
      m[nr * w + nc] = m[r * w + c] + 1;
      v[nr * w + nc] = true;
      q.emplace(nr, nc);
    }
    if (g[r][c] < 'a' || 'z' < g[r][c]) continue;
    t[g[r][c] - 'a'].erase(P(r, c));
    for (auto [nr, nc] : t[g[r][c] - 'a']) {
      if (v[nr * w + nc]) continue;
      m[nr * w + nc] = m[r * w + c] + 1;
      v[nr * w + nc] = true;
      q.emplace(nr, nc);
    }
    t[g[r][c] - 'a'].clear();
  }
  int ans = m[gr * w + gc] == kInf ? -1 : m[gr * w + gc];
  std::cout << ans << '\n';
}
