// URL: https://atcoder.jp/contests/abc137/submissions/6833021
// Date: Sat, 10 Aug 2019 14:01:00 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  map<int, deque<int>> m;
  for (int i = 0; i < N; ++i) {
    int A, B;
    cin >> A >> B;
    m[A].push_back(B);
  }
  int ans = 0;
  priority_queue<int> que;
  for (int i = 1; i <= M; ++i) {
    if (m.find(i) != m.end())
      for (auto& v : m[i])
        que.push(v);
    if (que.empty())continue;
    ans += que.top();
    que.pop();
  }
  cout << ans << endl;
}
