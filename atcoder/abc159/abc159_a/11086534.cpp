// URL: https://atcoder.jp/contests/abc159/submissions/11086534
// Date: Sun, 22 Mar 2020 12:03:44 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  cout << N * (N - 1) / 2 + M * (M - 1) / 2 << endl;
}
