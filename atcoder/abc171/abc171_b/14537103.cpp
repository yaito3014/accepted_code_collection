// URL: https://atcoder.jp/contests/abc171/submissions/14537103
// Date: Sun, 21 Jun 2020 12:04:22 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (auto& e : A) cin >> e;
  sort(begin(A), end(A));
  cout << accumulate(cbegin(A), next(cbegin(A), K), 0) << '\n';
}
