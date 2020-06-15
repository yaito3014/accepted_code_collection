// URL: https://atcoder.jp/contests/abc170/submissions/14386035
// Date: Mon, 15 Jun 2020 08:46:00 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; ++i) cin >> A[i] >> B[i];
  map<int, int> schools;
  map<int, map<int, int>> children;
  for (int i = 0; i < N; ++i) ++children[B[i]][A[i]];
  for (const auto& [i, m] : children)
    ++schools[m.crbegin()->first];
  for (int q = 0; q < Q; ++q) {
    int C, D;
    cin >> C >> D, --C;
    auto& from = children[B[C]];
    auto& to = children[D];
    const auto& rate = A[C];
    if (auto iter = from.find(rate); --iter->second == 0) {
    	if (next(iter) == from.end())
    	  if (auto iter2 = schools.find(rate); --iter2->second == 0) 
    	    schools.erase(iter2);
    	if (from.size() > 1 && next(iter) == from.end())
    	  ++schools[next(from.rbegin())->first];
    	from.erase(iter);
    }
    if (++to[rate] == 1 && to.rbegin()->first == rate) {
    	if (to.size() > 1)
    	  if (auto iter = schools.find(next(to.rbegin())->first);
    	      --iter->second == 0)
    	    schools.erase(iter);
      ++schools[rate];
    }
    B[C] = D;
    cout << schools.begin()->first << '\n';
  }
}
