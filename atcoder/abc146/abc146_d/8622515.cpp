// URL: https://atcoder.jp/contests/abc146/submissions/8622515
// Date: Sun, 24 Nov 2019 12:55:41 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

struct Edge {
  int a, b;
  int color;
};

struct EdgeD {
  int id;
  int to;
  EdgeD() = default;
  EdgeD(int id_, int to_)
    : id(id_), to(to_) {}
};

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<Edge> E(N - 1);
  for (auto& v : E) {
    cin >> v.a >> v.b;
    --v.a; --v.b;
  }
  vector<vector<EdgeD>> G(N);
  for (int i = 0; i < N - 1; ++i) {
    G[E[i].a].push_back(EdgeD(i, E[i].b));
    G[E[i].b].push_back(EdgeD(i, E[i].a));
  }
  int K = 0;
  vector<bool> visited(N, false);
  queue<pair<int, int>> que;  // index, color
  que.push(make_pair(0, 0));
  while (!que.empty()) {
    auto cur = que.front(); que.pop();
    visited[cur.first] = true;
    int k = 0;
    for (auto& e : G[cur.first]) {
      if (visited[e.to])continue;
      ++k;
      if (k == cur.second)++k;
      K = max(K, k);
      E[e.id].color = k;
      que.push(make_pair(e.to, k));
    }
  }
  cout << K << endl;
  for (auto& e : E)cout << e.color << "\n";
  cout << flush;
}
