// URL: https://atcoder.jp/contests/abc161/submissions/11501439
// Date: Sat, 04 Apr 2020 12:07:53 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (auto& e : A)cin >> e;
  sort(rbegin(A), rend(A));
  bool ans = A[M - 1] >= accumulate(begin(A), end(A), 0) / 4. / M;
  cout << (ans ? "Yes" : "No") << endl;
}
