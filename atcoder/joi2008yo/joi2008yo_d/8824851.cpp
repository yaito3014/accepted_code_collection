// URL: https://atcoder.jp/contests/joi2008yo/submissions/8824851
// Date: Sat, 07 Dec 2019 11:50:08 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

struct Pos {
  int x, y;
  Pos() = default;
  Pos(int x_, int y_)
    : x(x_), y(y_) {}
  Pos& operator +=(const Pos& rhs) {
    x += rhs.x;
    y += rhs.y;
    return *this;
  }
  Pos& operator -=(const Pos& rhs) {
    x -= rhs.x;
    y -= rhs.y;
    return *this;
  }
};

Pos operator +(Pos lhs, const Pos& rhs) {
  return (lhs += rhs);
}
Pos operator -(Pos lhs, const Pos& rhs) {
  return (lhs -= rhs);
}
bool operator <(const Pos& lhs, const Pos& rhs) {
  return std::tie(lhs.x, lhs.y) < std::tie(rhs.x, rhs.y);
}

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int m;
  cin >> m;
  vector<Pos> original(m);
  for (auto& v : original)cin >> v.x >> v.y;
  int n;
  cin >> n;
  vector<Pos> data(n);
  for (auto& v : data)cin >> v.x >> v.y;
  sort(begin(original), end(original));
  sort(begin(data), end(data));
  for (auto& base : data) {
    bool found = true;
    for (int i = 1; i < m; ++i) {
      if (binary_search(begin(data), end(data), base + original[i] - original[0]))continue;
      found = false;
      break;
    }
    if (found) {
      cout << base.x - original[0].x << " " << base.y - original[0].y << endl;
      break;
    }
  }
}
