// URL: https://atcoder.jp/contests/abc111/submissions/10063640
// Date: Wed, 12 Feb 2020 14:18:50 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  string n;
  cin >> n;
  replace(begin(n), end(n), '1', 'x');
  replace(begin(n), end(n), '9', '1');
  replace(begin(n), end(n), 'x', '9');
  cout << n << endl;
}
