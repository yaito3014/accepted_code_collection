// URL: https://atcoder.jp/contests/nomura2020/submissions/13745012
// Date: Sat, 30 May 2020 14:32:05 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<long long> A(N + 1);
  for (auto&e : A) cin >> e;
  if (N == 0 && A[0] != 1) {
  		cout << -1 << endl;
  		return 0;
 	}
  vector<long long> csum(N + 1, 0);
  partial_sum(crbegin(A), crend(A), rbegin(csum));
  vector<long long> nodes(N + 1);
  nodes[0] = 1;
  for (int i = 0; i <= N; ++i) {
  	if (nodes[i] < A[i]) {
  		cout << -1 << endl;
  		return 0;
  	}
  	nodes[i] -= A[i];
  	if (i < N) nodes[i + 1] = min(nodes[i] * 2ll, csum[i + 1]);
  }
  long long ans = accumulate(cbegin(nodes), cend(nodes), 0ll) + csum[0];
  cout << ans << endl;
}
