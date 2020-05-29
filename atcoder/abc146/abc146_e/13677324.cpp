// URL: https://atcoder.jp/contests/abc146/submissions/13677324
// Date: Fri, 29 May 2020 03:04:31 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  vector<int> A(N + 1, 0);
  copy_n(istream_iterator<int>(cin), N, next(begin(A)));
  for (int i = 0; i < N; ++i) A[i + 1] = (A[i + 1] + A[i]) % K;
  for (int i = 0; i < N + 1; ++i) { 
  	A[i] -= i % K;
  	while (A[i] < 0) A[i] += K;
  }
  map<int, int> m;
  long long ans = 0;
  for (int i = 0; i < N + 1; ++i) {
  	if (i >= K) --m[A[i - K]];
  	auto& r = m[A[i]];
  	ans += r;
  	++r;
  }
  cout << ans << endl;
}
