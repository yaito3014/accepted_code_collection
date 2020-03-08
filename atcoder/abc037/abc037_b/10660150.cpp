// URL: https://atcoder.jp/contests/abc037/submissions/10660150
// Date: Sun, 08 Mar 2020 06:47:01 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, Q;
  cin >> N >> Q;
  vector<int> a(N);
  for (int i = 0; i < Q; ++i) {
    int L, R, T;
    cin >> L >> R >> T, --L;
    for (int j = L; j < R; ++j)a[j] = T;
  }
  for (const auto& e : a)cout << e << '\n';
}
