// URL: https://atcoder.jp/contests/abc160/submissions/11283837
// Date: Sat, 28 Mar 2020 12:13:47 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  for (auto& e : A)cin >> e;
  int span = K + A[0] - A[N - 1];
  for (int i = 0; i < N - 1; ++i)
    span = max(span, A[i + 1] - A[i]);
  cout << K - span << endl;
}
