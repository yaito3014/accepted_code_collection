// URL: https://atcoder.jp/contests/abc155/submissions/10159003
// Date: Sun, 16 Feb 2020 13:26:29 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  int64_t K;
  cin >> N >> K;
  vector<int64_t> A(N);
  for (auto& e : A)cin >> e;
  sort(begin(A), end(A));
  int64_t Max = 1e18;
  int64_t low = -Max-1, high = Max;
  while (high - low > 1) {
    int64_t mid = low + (high - low) / 2;
    int64_t n = 0;
    for (int i = 0; i < N; ++i) {
      int d;
      if (A[i] >= 0) {
        auto iter = partition_point(next(begin(A), i + 1), end(A), [&](int64_t v) { return A[i] * v < mid; });
        d = distance(next(begin(A), i + 1), iter);
      }
      else {
        auto iter = partition_point(rbegin(A), prev(rend(A), i + 1), [&](int64_t v) { return A[i] * v < mid; });
        d = distance(rbegin(A), iter);
      }
      n += d;
    }
    if (n >= K)high = mid;
    else low = mid;
  }
  cout << high-1 << endl;
}
