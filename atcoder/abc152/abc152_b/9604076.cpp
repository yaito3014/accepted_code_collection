// URL: https://atcoder.jp/contests/abc152/submissions/9604076
// Date: Sun, 19 Jan 2020 11:55:39 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;
  cout << min(string(b, '0' + a), string(a, '0' + b)) << endl;
}
