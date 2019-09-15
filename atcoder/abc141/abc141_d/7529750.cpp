// URL: https://atcoder.jp/contests/abc141/submissions/7529750
// Date: Sun, 15 Sep 2019 12:28:32 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (auto& v : A)cin >> v;
  sort(begin(A), end(A));
  for (int i = 0; i < M; ++i) {
    int a = A.back() >> 1; A.pop_back();
    A.insert(lower_bound(begin(A), end(A), a), a);
  }
  int64_t ans = accumulate(begin(A), end(A), 0ll);
  cout << ans << endl;
}
