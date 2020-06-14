// URL: https://atcoder.jp/contests/abc170/submissions/14361472
// Date: Sun, 14 Jun 2020 14:03:36 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

namespace {
struct Pos {
  int x, y;
  Pos() = default;
  constexpr Pos(int x_, int y_) : x(x_), y(y_) {}
  constexpr Pos& operator+=(const Pos& rhs) {
    x += rhs.x, y += rhs.y;
    return *this;
  }
  constexpr Pos& operator*=(int rhs) {
    x *= rhs, y *= rhs;
    return *this;
  }
};
bool operator==(const Pos& lhs, const Pos& rhs) {
  return lhs.x == rhs.x && lhs.y == rhs.y;
}
Pos operator+(Pos lhs, const Pos& rhs) { return lhs += rhs; }
Pos operator*(Pos lhs, int rhs) { return lhs *= rhs; }
}  // namespace

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int H, W, K;
  cin >> H >> W >> K;
  Pos s, g;
  cin >> s.y >> s.x >> g.y >> g.x;
  s += Pos(-1, -1);
  g += Pos(-1, -1);
  vector<string> field(H);
  for (auto& e : field) cin >> e;
  constexpr array<Pos, 4> Dir = {{
      Pos(0, 1),
      Pos(0, -1),
      Pos(1, 0),
      Pos(-1, 0),
  }};
  constexpr int kInf = INT_MAX;
  vector rec(H, vector(W, kInf));
  queue<Pos> q;
  rec[s.y][s.x] = 0;
  q.push(s);
  while (!q.empty()) {
    Pos cur = q.front();
    q.pop();
    for (const auto& dir : Dir) {
      for (int i = 1; i <= K; ++i) {
        Pos nxt = cur + dir * i;
        if (nxt.x < 0 || W <= nxt.x || nxt.y < 0 || H <= nxt.y) continue;
        if (field[nxt.y][nxt.x] == '@') break;
        if (rec[nxt.y][nxt.x] <= rec[cur.y][cur.x]) break;
        if (rec[nxt.y][nxt.x] <= rec[cur.y][cur.x] + 1) continue;
        rec[nxt.y][nxt.x] = rec[cur.y][cur.x] + 1;
        q.push(nxt);
      }
    }
  }
  for (auto& row : rec)
    for (auto& e : row)
      if (e == kInf) e = -1;
  for (const auto& row : rec) {
    for (const auto& e : row) cerr << setw(2) << e << ',';
    cerr << '\n';
  }
  cout << rec[g.y][g.x] << '\n';
}
