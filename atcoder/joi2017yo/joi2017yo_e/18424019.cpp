// URL: https://atcoder.jp/contests/joi2017yo/submissions/18424019
// Date: Thu, 26 Nov 2020 15:47:36 +0000
// Language: C++ (GCC 9.2.1)
#include <array>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

int main() {
  using std::vector;
  using P = std::pair<int, int>;
  constexpr std::array<int, 5> kD = {{ 0, 1, 0, -1, 0, }};
  int h, w;
  std::cin >> h >> w;
  vector<vector<int>> m(h, vector<int>(w));
  for (auto& r : m) for (auto& e : r) std::cin >> e;
  vector<vector<int>> t(h, vector<int>(w, 0));
  std::queue<P> q;
  int ans = 0;
  for (int r = 0; r < h; ++r) {
    for (int c = 0; c < w; ++c) {
      bool path = false;
      for (int d = 0; d < 4; ++d) {
        int nr = r + kD[d];
        int nc = c + kD[d + 1];
        if (nr < 0 || h <= nr || nc < 0 || w <= nc) continue;
        if (m[nr][nc] >= m[r][c]) continue;
        path = true;
        break;
      }
      if (path) continue;
      vector<bool> v(h * w, false);
      q.emplace(r, c);
      v[r * w + c] = true;
      while (!q.empty()) {
      	auto [cr, cc] = q.front();
      	q.pop();
        for (int d = 0; d < 4; ++d) {
          int nr = cr + kD[d];
          int nc = cc + kD[d + 1];
          if (nr < 0 || h <= nr || nc < 0 || w <= nc) continue;
          if (m[nr][nc] <= m[cr][cc]) continue;
          if (v[nr * w + nc]) continue;
          v[nr * w + nc] = true;
          ++t[nr][nc];
          q.emplace(nr, nc);
        }
      }
    }
  }
  for (auto& r : t) for (auto& e : r) ans += e > 1;
  std::cout << ans << '\n';
}
