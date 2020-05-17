// URL: https://atcoder.jp/contests/abc168/submissions/13322575
// Date: Sun, 17 May 2020 12:35:41 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<deque<int>> graph(N);
  for (int i = 0; i < M; ++i) {
    int A, B;
    cin >> A >> B, --A, --B;
    graph[A].push_back(B);
    graph[B].push_back(A);
  }
  vector<int> ans(N, -1);
  queue<int> que;
  que.push(0);
  ans[0] = 0;
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    for (int to : graph[v]) {
      if (ans[to] != -1) continue;
      ans[to] = v + 1;
      que.push(to);
    }
  }
  if (any_of(begin(ans), end(ans), [](int n) { return n == -1; }))
    cout << "No" << endl;
  else {
    cout << "Yes" << '\n';
    for (int i = 1; i < N; ++i) cout << ans[i] << '\n';
  }
}
