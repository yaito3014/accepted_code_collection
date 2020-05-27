// URL: https://atcoder.jp/contests/arc030/submissions/13645961
// Date: Wed, 27 May 2020 13:59:04 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n, x;
  cin >> n >> x, --x;
  vector<int> h(n);
  for (auto& e : h) cin >> e;
  vector<deque<int>> g(n);
  for (int i = 0; i < n - 1; ++i) {
  	int a, b;
  	cin >> a >> b, --a, --b;
  	g[a].push_back(b);
  	g[b].push_back(a);
  }
  auto dfs = [](auto&& f) {
  	return [=](auto&&... args) { return f(f, forward<decltype(args)>(args)...); };
  }([&](auto&& self, int cur, int prv) -> int {
    int cnt = 0;
    for (int nxt : g[cur])
    	if (nxt != prv) cnt += self(self, nxt, cur);
    return cnt + (h[cur] || cnt) * 2;
  });
  int ans = max(0, dfs(x, -1) - 2);
  cout << ans << endl;
}
