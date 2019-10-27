// URL: https://atcoder.jp/contests/abc035/submissions/8146214
// Date: Sun, 27 Oct 2019 11:53:20 +0000
// Language: C++14 (Clang 3.8.0)
// Copyright 2019 yaito3014
#include <iostream>
#include <climits>
#include <vector>
#include <queue>
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  constexpr int INF = INT_MAX - 100000;
  int N, M, T;
  cin >> N >> M >> T;
  vector<int> A(N);
  for (auto& v : A)cin >> v;
  struct Edge {
    int to, cost;
    Edge() = default;
    Edge(int to_, int cost_) :to(to_), cost(cost_) {}
  };
  auto dijkstra = [&](vector<vector<Edge>>& graph, int s, vector<int64_t>& res) {
    priority_queue<int, vector<int>, greater<int>> que;
    fill(begin(res), end(res), INF);
    res[s] = 0;
    que.push(s);
    while (!que.empty()) {
      int cur = que.top(); que.pop();
      for (const Edge& e : graph[cur]) {
        if (res[e.to] <= res[cur] + e.cost)continue;
        res[e.to] = res[cur] + e.cost;
        que.push(e.to);
      }
    }
  };
  vector<vector<Edge>> graph(N), graph_rev(N);
  for (int i = 0; i < M; ++i) {
    int a, b, c;
    cin >> a >> b >> c;
    --a; --b;
    graph[a].push_back(Edge(b, c));
    graph_rev[b].push_back(Edge(a, c));
  }
  vector<int64_t> min_cost(N);
  dijkstra(graph, 0, min_cost);
  vector<int64_t> min_cost_rev(N);
  dijkstra(graph_rev, 0, min_cost_rev);

  int64_t ans = 0;
  for (int i = 0; i < N; ++i) {
    int64_t c = min_cost[i] + min_cost_rev[i];
    ans = max(ans, A[i] * (T - c));
  }
  cout << ans << endl;
}
