// URL: https://atcoder.jp/contests/future-contest-2020-qual/submissions/8251951
// Date: Sat, 02 Nov 2019 08:32:42 +0000
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

  queue<Obj> que;
  que.emplace(goal, 'G');
  while (!que.empty()) {
    Obj cur = que.front(); que.pop();
    if (cur.dir != 'G' && f[cur.pos.y][cur.pos.x] != ' ')continue;
    f[cur.pos.y][cur.pos.x] = cur.dir;
    que.emplace(cur.pos + -R, 'R');
    que.emplace(cur.pos + -L, 'L');
    que.emplace(cur.pos + -U, 'U');
    que.emplace(cur.pos + -D, 'D');
  }

  vector<Sign> ans;
  for (int y = 0; y < N; ++y)
    for (int x = 0; x < N; ++x)
      switch (f[y][x])case 'L':case'U':case'R':case'D':
        ans.push_back(Sign(Vec(x, y), f[y][x]));
        cout << ans.size() << endl;
        for (auto& v : ans)cout << v.pos.y << " " << v.pos.x << " " << v.dir << "
";
        cout << flush;
}
