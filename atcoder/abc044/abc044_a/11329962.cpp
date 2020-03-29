// URL: https://atcoder.jp/contests/abc044/submissions/11329962
// Date: Sun, 29 Mar 2020 01:54:59 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, K, X, Y;
  cin >> N >> K >> X >> Y;
  cout << (X * min(N, K) + Y * max(0, N - K)) << endl;
}
