// URL: https://atcoder.jp/contests/joi2009yo/submissions/19111375
// Date: Sat, 02 Jan 2021 07:14:27 +0000
// Language: C++ (GCC 9.2.1)
#include <algorithm>
#include <array>
#include <iostream>
#include <utility>
#include <vector>

struct Point {
  int x, y;
  Point() = default;
  constexpr Point(int x_, int y_) : x(x_), y(y_) {}
  constexpr Point& operator+=(const Point& rhs) {
    x += rhs.x;
    y += rhs.y;
    return *this;
  }
};

constexpr Point operator+(Point lhs, const Point& rhs) { return lhs += rhs; }

int main() {
  int m, n;
  std::cin >> m >> n;
  std::vector<std::vector<int>> field(n, std::vector<int>(m, 0));
  for (auto& row : field)
    for (auto& elem : row) std::cin >> elem;

  constexpr std::array<Point, 4> Dirs = {{
      Point{0, 1},
      Point{0, -1},
      Point{1, 0},
      Point{-1, 0},
  }};
  std::vector<std::vector<bool>> visited(n, std::vector<bool>(m, false));
  int ans = 0;
  auto dfs = [](auto&& f) {
    return [=](auto&&... args) {
      return f(f, std::forward<decltype(args)>(args)...);
    };
  }([&](auto&& self, Point now, int len) -> void {
    bool last = true;
    visited[now.y][now.x] = true;
    for (const auto& dir : Dirs) {
      Point next = now + dir;
      if (next.x < 0 || m <= next.x || next.y < 0 || n <= next.y) continue;
      if (visited[next.y][next.x]) continue;
      if (field[next.y][next.x] == 0) continue;
      last = false;
      self(self, next, len + 1);
    }
    visited[now.y][now.x] = false;
    if (last) ans = std::max(ans, len);
  });
  for (int y = 0; y < n; ++y) {
    for (int x = 0; x < m; ++x) {
      if (field[y][x]) dfs(Point{x, y}, 1);
    }
  }
  std::cout << ans << '\n';
}
