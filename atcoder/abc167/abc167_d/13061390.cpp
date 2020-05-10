// URL: https://atcoder.jp/contests/abc167/submissions/13061390
// Date: Sun, 10 May 2020 12:44:32 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  using ll = long long;
  int N;
  ll K;
  cin >> N >> K;
  vector<int> A(N);
  for (auto& e : A) cin >> e, --e;
  vector<bool> visited(N, false);
  vector<int> path = {0};
  while (!visited[A[path.back()]]) {
    visited[path.back()] = true;
    path.push_back(A[path.back()]);
  }
  int rem = 0;
  while (path[rem] != A[path.back()]) ++rem;
  cout << ((K <= rem ? path[K] : path[(K - rem) % (path.size() - rem) + rem]) +
           1)
       << endl;
}
