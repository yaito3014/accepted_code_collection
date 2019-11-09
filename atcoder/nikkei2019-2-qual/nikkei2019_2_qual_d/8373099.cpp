// URL: https://atcoder.jp/contests/nikkei2019-2-qual/submissions/8373099
// Date: Sat, 09 Nov 2019 15:32:51 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

struct Edge {
  int to, cost;
  Edge() = default;
  Edge(int t, int c)
    : to(t), cost(c) {}
};

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<vector<Edge>> G(N);
  for (int i = 0; i < N - 1; ++i)
    G[i + 1].push_back(Edge(i, 0));  // N→1にはノーコストで動ける
  for (int i = 0; i < M; ++i) {
    int L, R, C;
    cin >> L >> R >> C;
    G[--L].push_back(Edge(--R, C));  // C使ってL→Rに行ける
  }
  vector<int64_t> cost(N, INT64_MAX);
  cost[0] = 0;
  using P = pair<int64_t, int>;  // first: cost, second: index
  priority_queue<P, vector<P>, greater<P>> que;
  que.push(P(0, 0));
  while (!que.empty()) {
    P cur = que.top(); que.pop();
    for (Edge& nxt : G[cur.second]) {
      int64_t c = cur.first + nxt.cost;
      if (cost[nxt.to] <= c)continue;
      cost[nxt.to] = c;
      que.push(P(c, nxt.to));
    }
  }
  int64_t ans = cost[N - 1];
  if (ans == INT64_MAX)ans = -1;
  cout << ans << endl;
}
