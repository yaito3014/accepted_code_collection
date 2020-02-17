// URL: https://atcoder.jp/contests/abc149/submissions/10178757
// Date: Mon, 17 Feb 2020 09:11:20 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  int64_t M;
  cin >> N >> M;
  vector<int64_t> A(N);
  for (auto& e : A)cin >> e;
  sort(begin(A), end(A));
  vector<int64_t> csumA(N + 1, 0);
  for(int i = 0; i < N; ++i)csumA[i + 1] = csumA[i] + A[i];
  int64_t low = 0, high = A.back()*2+1;
  while (high - low > 1) {
    int64_t mid = low + (high - low) / 2;
    int64_t n = 0;
    for(int i = 0; i < N; ++i){
      auto iter = lower_bound(begin(A), end(A), mid-A[i]);
      int d = distance(begin(A), iter);
      n += N-d;
    }
    if(n>=M)low = mid;
    else high = mid;
  }
  int64_t sum = 0;
  int64_t n = 0;
  for(int i = 0; i < N; ++i){
      auto iter = lower_bound(begin(A), end(A), low-A[i]);
      int d = distance(begin(A), iter);
      sum += csumA[N] - csumA[d] + A[i] * (N-d);
      n += N - d;
  }
  if(n>M)sum -= (n - M) * low;
  cout << sum << endl;
}
