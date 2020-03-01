// URL: https://atcoder.jp/contests/abc157/submissions/10455004
// Date: Sun, 01 Mar 2020 12:55:22 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
  std::vector<int> rank;
  std::vector<int> parent;
  std::vector<int> size_;
  using Iter = std::vector<int>::iterator;
  void init(int n) {
    parent.resize(n, 0); rank.resize(n, 0); size_.resize(n, 1);
    for (int i = 0; i < n; ++i)parent[i] = i;
  }
  int root(int n) {
    if (parent[n] == n)return n;
    else {
      parent[n] = root(parent[n]);
      return parent[n];
    }
  }
  void merge(int a, int b) {
    a = root(a);
    b = root(b);
    if (a == b)return;
    if (rank[a] < rank[b]) {
      parent[a] = b;
      size_[b] += size_[a];
    }
    else {
      parent[b] = a;
      if (rank[a] == rank[b])++rank[a];
      size_[a] += size_[b];
    }
  }
  int size(int n) {
    n = root(n);
    return size_[n];
  }
  bool is_same(int a, int b) {
    return root(a) == root(b);
  }
};

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M, K;
  cin >> N >> M >> K;
  UnionFind friends;
  vector<int> direct_fr(N, 0);
  friends.init(N);
  for (int i = 0; i < M; ++i) {
    int A, B;
    cin >> A >> B;
    --A; --B;
    ++direct_fr[A];
    ++direct_fr[B];
    friends.merge(A, B);
  }
  vector<int> ans(N);
  for (int i = 0; i < N; ++i)ans[i] = friends.size(i) - 1 - direct_fr[i];
  for (int i = 0; i < K; ++i) {
    int C, D;
    cin >> C >> D;
    --C; --D;
    if (friends.is_same(C, D))--ans[C], --ans[D];
  }
  for (const auto e : ans)cout << e << " ";
  cout << endl;
}
