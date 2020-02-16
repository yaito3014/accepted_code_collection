// URL: https://atcoder.jp/contests/abc111/submissions/10120419
// Date: Sun, 16 Feb 2020 05:32:07 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  int n = N / 100 % 10;
  if (N > n * 100 + n * 10 + n)++n;
  cout << (n * 100 + n * 10 + n) << endl;
}
