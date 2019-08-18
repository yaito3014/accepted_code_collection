// URL: https://atcoder.jp/contests/abc138/submissions/6998954
// Date: Sun, 18 Aug 2019 12:39:56 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  struct Node {
    int counter = 0;
    deque<int> to;
  };
  vector<Node> nodes(N);
  for (int i = 0; i < N - 1; ++i) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    nodes[a].to.push_back(b);
    nodes[b].to.push_back(a);
  }
  for (int i = 0; i < Q; ++i) {
    int p, x;
    cin >> p >> x;
    --p;
    nodes[p].counter += x;
  }
  vector<bool> visited(N, false);
  queue<int> q;
  q.push(0); visited[0] = true;
  while (!q.empty()) {
    int cur = q.front(); q.pop();
    visited[cur] = true;
    for (auto& next : nodes[cur].to) {
      if (visited[next])continue;
      nodes[next].counter += nodes[cur].counter;
      q.push(next);
    }
  }
  for (auto& node : nodes)
    cout << node.counter << " ";
}
