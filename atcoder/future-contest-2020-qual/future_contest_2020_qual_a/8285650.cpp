// URL: https://atcoder.jp/contests/future-contest-2020-qual/submissions/8285650
// Date: Mon, 04 Nov 2019 05:48:03 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

struct Vec {
  static int N;
  int x, y;
  Vec() = default;
  Vec(int x_, int y_)
    : x(x_), y(y_) {}
  Vec resolve() const {
    return Vec((x + N) % N, (y + N) % N);
  }
  Vec& operator+=(const Vec& rhs) {
    x += rhs.x;
    y += rhs.y;
    *this = resolve();
    return *this;
  }
  Vec operator-() const {
    return Vec(-x, -y);
  }
};

int Vec::N;

Vec operator+(const Vec& a, const Vec& b) {
  return Vec(a.x + b.x, a.y + b.y).resolve();
}

bool operator==(const Vec& a, const Vec& b) {
  return a.x == b.x && a.y == b.y;
}

bool operator!=(const Vec& a, const Vec& b) {
  return !(a == b);
}

const Vec L(-1, 0);
const Vec R(1, 0);
const Vec U(0, -1);
const Vec D(0, 1);

struct Obj {
  Vec pos;
  char dir;
  Obj() = default;
  Obj(const Vec& p, char d)
    : pos(p), dir(d) {}
};

using Robot = Obj;
using Sign = Obj;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int N, M, B;
  cin >> N >> M >> B;
  Vec::N = N;
  Vec goal;
  cin >> goal.y >> goal.x;
  vector<Robot> robots(M);
  for (auto& v : robots)
    cin >> v.pos.y >> v.pos.x >> v.dir;
  vector<Vec> blocks(B);
  for (auto& v : blocks)
    cin >> v.y >> v.x;
  vector<vector<char>>f(N, vector<char>(N, ' '));
  for (auto& v : blocks)f[v.y][v.x] = 'B';

  deque<Obj> que;
  que.emplace_back(goal, 'G');
  while (!que.empty()) {
    Obj cur = que.front(); que.pop_front();
    if (cur.dir != 'G' && f[cur.pos.y][cur.pos.x] != ' ')continue;
    f[cur.pos.y][cur.pos.x] = cur.dir;
    cur.dir == 'R' ? que.emplace_front(cur.pos + -R, 'R') : que.emplace_back(cur.pos + -R, 'R');
    cur.dir == 'L' ? que.emplace_front(cur.pos + -L, 'L') : que.emplace_back(cur.pos + -L, 'L');
    cur.dir == 'U' ? que.emplace_front(cur.pos + -U, 'U') : que.emplace_back(cur.pos + -U, 'U');
    cur.dir == 'D' ? que.emplace_front(cur.pos + -D, 'D') : que.emplace_back(cur.pos + -D, 'D');
  }

  vector<vector<int>> used(N, vector<int>(N, 0));
  for (auto& v : robots) {
    while (v.pos != goal) {
      char new_dir = f[v.pos.y][v.pos.x];
      if (used[v.pos.y][v.pos.x])break;
      if (v.dir != new_dir) {
        v.dir = new_dir;
        ++used[v.pos.y][v.pos.x];
      }
      switch (v.dir) {
      case 'L':v.pos += L; break;
      case 'U':v.pos += U; break;
      case 'R':v.pos += R; break;
      case 'D':v.pos += D; break;
      }
    }
  }

  vector<Sign> ans;
  ans.reserve(N * N);
  for (int y = 0; y < N; ++y)
    for (int x = 0; x < N; ++x)
      switch (f[y][x]) {
      case 'L':case'U':case'R':case'D':
        if (used[y][x])ans.push_back(Sign(Vec(x, y), f[y][x]));
      }
  cout << ans.size() << endl;
  for (auto& v : ans)cout << v.pos.y << " " << v.pos.x << " " << v.dir << "
";
  cout << flush;
}
