// URL: https://atcoder.jp/contests/arc008/submissions/10531799
// Date: Wed, 04 Mar 2020 14:57:55 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

template<class T, class F>
struct SegmentTree{
	size_t bottom_size;
  vector<T> data;
  T identity;
  F func;
	SegmentTree(size_t N, T identity_, const F& func_)
    : identity(identity_)
    , func(func_)
  {
    bottom_size = 1;
    while(bottom_size < N)bottom_size <<= 1;
    data.resize(2*bottom_size-1, identity);
  }
  void update(size_t index, T value) {
  	index += bottom_size - 1;
    data[index] = value;
    if(index == 0)return;
    do {
      index = (index - 1) / 2;
      data[index] = func(data[index*2+1], data[index*2+2]);
    } while (index > 0);
  }
  T get(size_t l, size_t r) const {
  	T res = identity;
    l += bottom_size - 1;
    r += bottom_size - 1;
    while(l < r) {
      if(l%2==0)res = func(res, data[l++]);
      if(r%2==0)res = func(data[--r], res);
      l = (l - 1) / 2;
      r = (r - 1) / 2;
    }
    return res;
  }
};

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int64_t N;
  int M;
  cin >> N >> M;
  struct Box{
  	double a, b;
  	Box() = default;
  	Box(double a_, double b_) : a(a_), b(b_) {}
  };
  auto f = [](const Box& a, const Box& b){
    return Box{a.a*b.a, a.b*b.a+b.b};
  };
  vector<pair<int64_t, Box>> modifications(M);
  map<int64_t, int> indexes;
  for(auto& e : modifications){
  	cin >> e.first >> e.second.a >> e.second.b;
  	indexes[e.first] = 0;
  }
  {
    int index = 0;
    for(auto& e : indexes)e.second = index++;
  }
  SegmentTree<Box, decltype(f)> tree(M, Box{1, 0}, f);
  pair<double, double> ans{1, 1};
  for(const auto& e : modifications) {
  	tree.update(indexes[e.first], e.second);
  	Box b = tree.get(0, M);
  	ans.first = min(ans.first, b.a+b.b);
  	ans.second = max(ans.second, b.a+b.b);
  }
  cout << fixed << setprecision(7) << ans.first << '
';
  cout << fixed << setprecision(7) << ans.second << '
';
}
