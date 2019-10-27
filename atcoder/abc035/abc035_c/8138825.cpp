// URL: https://atcoder.jp/contests/abc035/submissions/8138825
// Date: Sun, 27 Oct 2019 05:29:21 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int N, Q;
  cin >> N >> Q;
  vector<int> F(N + 1), S(N + 2, 0);
  for (int i = 0; i < Q; ++i) {
    int l, r;
    cin >> l >> r;
    ++F[l - 1]; --F[r];
  }
  for (int i = 0; i < N; ++i)
    S[i + 1] = S[i] + F[i];
  for (int i = 1; i <= N; ++i)
    cout << S[i] % 2;
  cout << endl;
}
