// URL: https://atcoder.jp/contests/future-contest-2020-qual/submissions/8250765
// Date: Sat, 02 Nov 2019 07:48:02 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

struct Vec {
  int x, y;
  Vec() = default;
  Vec(int x_, int y_)
    : x(x_), y(y_) {}
  Vec resolve(int N) const {
    return Vec((x + N) % N, (y + N) % N);
  }
  Vec& operator+=(const Vec& rhs) {
    x += rhs.x;
    y += rhs.y;
    return *this;
  }
};

Vec operator+(const Vec& a, const Vec& b) {
  return Vec(a.x + b.x, a.y + b.y);
}

bool operator==(const Vec& a, const Vec& b) {
  return a.x == b.x && a.y == b.y;
}

bool operator!=(const Vec& a, const Vec& b) {
  return !(a == b);
}

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
  vector<Sign> ans;
  auto put = [&](const Vec& p, char d) {
    Vec pos = p.resolve(N);
    Vec r = (pos + Vec(1, 0)).resolve(N);
    if (f[r.y][r.x] == 'B')d = 'D';
    f[pos.y][pos.x] = d;
    ans.push_back(Sign(pos, d));
  };
  Vec s = (goal + Vec(0, -1)).resolve(N);
  Vec p = s;
  do {
    if (f[p.y][p.x] == ' ')put(p, 'D');
    Vec q = (p + Vec(0, 1)).resolve(N);
    if (f[q.y][q.x] == ' ')put(q, 'R');
    p = (p + Vec(1, -1)).resolve(N);
  } while (p != s);
  for (auto& v : blocks) {
    Vec q = (v + Vec(-1, 0)).resolve(N);
    if (f[q.y][q.x] == ' ')put(q, 'D');
    q = (v + Vec(-1, 1)).resolve(N);
    if (f[q.y][q.x] == ' ')put(q, 'R');
  }
  for (auto& v : robots) {
    if (v.dir == 'D' || v.dir == 'R')continue;
    if (f[v.pos.y][v.pos.x] == ' ')put(v.pos, 'R');
  }
  cout << ans.size() << endl;
  for (auto& v : ans)cout << v.pos.y << " " << v.pos.x << " " << v.dir << "
";
  cout << flush;
}
