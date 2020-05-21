// URL: https://atcoder.jp/contests/arc035/submissions/13444421
// Date: Thu, 21 May 2020 03:28:52 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  constexpr int INF = INT_MAX;
  int N, M;
  cin >> N >> M;
  struct Edge {
    int to, cost;
  };
  vector<deque<Edge>> graph(N);
  for (int i = 0; i < M; ++i) {
    int A, B, C;
    cin >> A >> B >> C, --A, --B;
    graph[A].push_back(Edge{B, C});
    graph[B].push_back(Edge{A, C});
  }
  int K;
  cin >> K;
  vector<vector<int>> record(N, vector<int>(N, INF));
  for (int i = 0; i < N; ++i) record[i][i] = 0;
  using P = pair<int, int>;
  priority_queue<P, vector<P>, greater<P>> pq;
  auto dijkstra = [&](int s, auto... args) {
  	(void)initializer_list<int>{ (pq.emplace(record[s][args], args), 0)... };
    while (!pq.empty()) {
      int cost, v;
      tie(cost, v) = pq.top();
      pq.pop();
      for (const Edge& e : graph[v]) {
        if (record[s][e.to] <= cost + e.cost) continue;
        record[s][e.to] = cost + e.cost;
        pq.emplace(record[s][e.to], e.to);
      }
    }
  };
  for (int i = 0; i < N; ++i)
    dijkstra(i, i);
  for (int i = 0; i < K; ++i) {
    int X, Y, Z;
    cin >> X >> Y >> Z, --X, --Y;
    graph[X].push_back(Edge{Y, Z});
    graph[Y].push_back(Edge{X, Z});
    long long sum = 0;
    for (int j = 0; j < N; ++j) {
      dijkstra(j, X, Y);
      sum += accumulate(cbegin(record[j]), cend(record[j]), 0ll);
    }
    cout << (sum / 2) << '
';
  }
}
