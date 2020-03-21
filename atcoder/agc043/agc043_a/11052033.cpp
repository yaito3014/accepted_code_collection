// URL: https://atcoder.jp/contests/agc043/submissions/11052033
// Date: Sat, 21 Mar 2020 12:55:57 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

struct Cor {
  int x, y;
  Cor() = default;
  Cor(int x_, int y_) : x(x_), y(y_) {}
};

bool operator==(const Cor& lhs, const Cor& rhs) {
  return lhs.x == rhs.x && lhs.y == rhs.y;
}

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int H, W;
  cin >> H >> W;
  vector<string> s(H);
  for (auto& row : s)cin >> row;
  constexpr int INF = INT_MAX;
  vector<vector<int>> costs(H, vector<int>(W, INF));
  queue<Cor> que;
  que.push(Cor{ 0,0 });
  costs[0][0] = (s[0][0] == '#' ? 1 : 0);
  while (!que.empty()) {
    Cor cur = que.front();
    que.pop();
    // cerr << cur.x << "," << cur.y << " : " << costs[cur.y][cur.x] << "
";
    if (cur == Cor{ W - 1,H - 1 })break;
    if (cur.x + 1 < W) {
      int cost = s[cur.y][cur.x] != '#' && s[cur.y][cur.x + 1] == '#' ? 1 : 0;
      // cerr << "[R] " << s[cur.y][cur.x] << " -> " << s[cur.y + 1][cur.x] << " : " << cost << "
";
      if (costs[cur.y][cur.x + 1] > costs[cur.y][cur.x] + cost) {
        costs[cur.y][cur.x + 1] = costs[cur.y][cur.x] + cost;
        que.push(Cor{ cur.x + 1, cur.y });
      }
    }
    if (cur.y + 1 < H) {
      int cost = s[cur.y][cur.x] != '#' && s[cur.y + 1][cur.x] == '#' ? 1 : 0;
      // cerr << "[D] " << s[cur.y][cur.x] << " -> " << s[cur.y + 1][cur.x] << " : " << cost << "
";
      if (costs[cur.y + 1][cur.x] > costs[cur.y][cur.x] + cost) {
        costs[cur.y + 1][cur.x] = costs[cur.y][cur.x] + cost;
        que.push(Cor{ cur.x , cur.y + 1 });
      }
    }
  }
  cout << costs[H - 1][W - 1] << endl;
}
