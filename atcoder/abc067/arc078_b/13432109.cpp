// URL: https://atcoder.jp/contests/abc067/submissions/13432109
// Date: Wed, 20 May 2020 12:57:58 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<deque<int>> graph(N);
  for (int i = 0; i < N - 1; ++i) {
    int a, b;
    cin >> a >> b, --a, --b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  int len = 0;
  vector<pair<int, int>> memo(N);
  auto dfs = [](auto&& f) {
    return [=](auto&&... args) {
      return f(f, std::forward<decltype(args)>(args)...);
    };
  }([&](auto&& self, int cur, int prv, int depth) -> int {
    int size = 0;
    if (cur == N - 1) len = depth;
    for (int nxt : graph[cur]) {
      if (nxt == prv) continue;
      size += self(self, nxt, cur, depth + 1);
    }
    memo[cur] = make_pair(prv, size + 1);
    return memo[cur].second;
  });
  dfs(0, -1, 0);
  int t = N - 1;
  for (int i = 0; i < (len - 1) / 2; ++i) t = memo[t].first;
  bool ans = memo[0].second - memo[t].second > memo[t].second;
  cout << (ans ? "Fennec" : "Snuke") << endl;
}
