// URL: https://atcoder.jp/contests/abc070/submissions/13607650
// Date: Mon, 25 May 2020 23:33:08 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  struct Edge {
    int to, cost;
  };
  vector<deque<Edge>> g(N);
  for (int i = 0; i < N - 1; ++i) {
    int a, b, c;
    cin >> a >> b >> c, --a, --b;
    g[a].push_back(Edge{b, c});
    g[b].push_back(Edge{a, c});
  }
  int Q, K;
  cin >> Q >> K, --K;
  using ll = long long;
  using P = pair<ll, int>;
  constexpr ll kInf = numeric_limits<ll>::max();
  vector<ll> rec(N, kInf);
  priority_queue<P, vector<P>, greater<P>> pq;
  rec[K] = 0;
  pq.emplace(0, K);
  while (!pq.empty()) {
    ll cost_sum;
    int v;
    tie(cost_sum, v) = pq.top();
    pq.pop();
    for (const auto& e : g[v]) {
      if (rec[e.to] <= cost_sum + e.cost) continue;
      rec[e.to] = cost_sum + e.cost;
      pq.emplace(rec[e.to], e.to);
    }
  }
  for (int i = 0; i < Q; ++i) {
    int x, y;
    cin >> x >> y, --x, --y;
    cout << (rec[x] + rec[y]) << '\n';
  }
}
