// URL: https://atcoder.jp/contests/soundhound2018-summer-qual/submissions/13277256
// Date: Sun, 17 May 2020 05:20:12 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n, m, s, t;
  cin >> n >> m >> s >> t, --s, --t;
  struct Edge {
    int to, yen, snuuk;
  };
  vector<deque<Edge>> graph(n);
  for (int i = 0; i < m; ++i) {
    int u, v, a, b;
    cin >> u >> v >> a >> b, --u, --v;
    graph[u].push_back(Edge{v, a, b});
    graph[v].push_back(Edge{u, a, b});
  }
  using ll = long long;
  using P = pair<ll, int>;
  using pque = priority_queue<P, vector<P>, greater<P>>;
  constexpr ll INF = numeric_limits<ll>::max();
  vector<ll> yen_memo(n, INF), snuuk_memo(n, INF);
  pque pq;
  yen_memo[s] = 0;
  pq.emplace(0, s);
  while (!pq.empty()) {
    ll cost;
    int v;
    tie(cost, v) = pq.top();
    pq.pop();
    for (const auto& e : graph[v]) {
      if (yen_memo[e.to] <= cost + e.yen) continue;
      yen_memo[e.to] = cost + e.yen;
      pq.emplace(cost + e.yen, e.to);
    }
  }
  snuuk_memo[t] = 0;
  pq.emplace(0, t);
  while (!pq.empty()) {
    ll cost;
    int v;
    tie(cost, v) = pq.top();
    pq.pop();
    for (const auto& e : graph[v]) {
      if (snuuk_memo[e.to] <= cost + e.snuuk) continue;
      snuuk_memo[e.to] = cost + e.snuuk;
      pq.emplace(cost + e.snuuk, e.to);
    }
  }
  constexpr ll INITIAL_YEN = 1'000'000'000'000'000;
  vector<ll> ans(n, 0);
  for (int i = n; i > 0; --i) {
    ans[i - 1] = INITIAL_YEN - yen_memo[i - 1] - snuuk_memo[i - 1];
    if (i < n) ans[i - 1] = max(ans[i - 1], ans[i]);
  }
  for (const auto& e : ans) cout << e << '\n';
}
