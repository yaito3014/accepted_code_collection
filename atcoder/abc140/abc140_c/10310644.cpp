// URL: https://atcoder.jp/contests/abc140/submissions/10310644
// Date: Sun, 23 Feb 2020 11:57:17 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  constexpr int INF = 1000000;
  vector<int> A(N), B(N+1, INF);
  for(int i = 1; i <= N - 1; ++i)cin >> B[i];
  for(int i = 0; i < N; ++i)
  	A[i] = min(B[i], B[i + 1]);
  int ans = accumulate(begin(A), end(A), 0);
  cout << ans << endl;
}
