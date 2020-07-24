// URL: https://atcoder.jp/contests/arc022/submissions/15398039
// Date: Fri, 24 Jul 2020 15:40:59 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <algorithm>
#include <climits>
#include <iostream>
#include <numeric>
#include <queue>
#include <set>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  std::vector<std::set<int>> graph(N);
  for (int i = 0; i < N - 1; ++i) {
    int A, B;
    std::cin >> A >> B, --A, --B;
    if (A == B) continue;
    graph[A].insert(B);
    graph[B].insert(A);
  }
  constexpr int kInf = INT_MAX;
  std::vector<int> record(N, kInf);
  std::queue<int> que;
  std::vector<int> idx(N);
  std::iota(begin(idx), end(idx), 0);
  record[0] = 0;
  que.push(0);
  while (!que.empty()) {
    int cur = que.front();
    que.pop();
    for (int nxt : graph[cur]) {
      if (record[nxt] <= record[cur] + 1) continue;
      record[nxt] = record[cur] + 1;
      que.push(nxt);
    }
  }
  std::sort(begin(idx), end(idx),
            [&](int a, int b) { return record[a] < record[b]; });
  int u = idx.back();
  fill(begin(record), end(record), kInf);
  record[u] = 0;
  que.push(u);
  while (!que.empty()) {
    int cur = que.front();
    que.pop();
    for (int nxt : graph[cur]) {
      if (record[nxt] <= record[cur] + 1) continue;
      record[nxt] = record[cur] + 1;
      que.push(nxt);
    }
  }
  std::sort(begin(idx), end(idx),
            [&](int a, int b) { return record[a] < record[b]; });
  int v = idx.back();
  std::cout << ++u << ' ' << ++v << '\n';
}
