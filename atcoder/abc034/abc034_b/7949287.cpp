// URL: https://atcoder.jp/contests/abc034/submissions/7949287
// Date: Sat, 12 Oct 2019 12:22:05 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int n;
  cin >> n;
  cout << (n % 2 ? n + 1 : n - 1) << endl;
}
