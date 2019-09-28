// URL: https://atcoder.jp/contests/abc142/submissions/7758979
// Date: Sat, 28 Sep 2019 12:55:32 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

class UnionFind {
public:
  std::vector<int> rank;
  std::vector<int> parent;
  using Iter = std::vector<int>::iterator;
  void init(int n) {
    parent.resize(n, 0); rank.resize(n, 0);
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
    if (rank[a] < rank[b])parent[a] = b;
    else {
      parent[b] = a;
      if (rank[a] == rank[b])++rank[a];
    }
  }
  bool is_same(int a, int b) {
    return root(a) == root(b);
  }
};

int64_t gcd(int64_t a, int64_t b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  int64_t A, B;
  cin >> A >> B;
  int64_t c = gcd(A, B);
  deque<int64_t> q;
  for (int64_t i = 1; i * i <= c; ++i) {
    if (c % i)continue;
    q.push_back(i);
    if (i == c / i)continue;
    q.push_front(c / i);
  }
  sort(begin(q), end(q));
  int n = q.size();
  UnionFind uf;
  uf.init(n);
  for (int i = 1; i < n; ++i) {
    for (int j = 0; j < i; ++j) {
      if (gcd(q[i], q[j]) == 1)continue;
      uf.merge(i, j);
      break;
    }
  }
  set<int> s;
  for (auto& v : uf.parent)s.insert(v);
  cout << s.size() << endl;
}
