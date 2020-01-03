// URL: https://atcoder.jp/contests/sumitrust2019/submissions/9301795
// Date: Fri, 03 Jan 2020 12:46:19 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  for (int X = 0; X <= 60000; ++X) {
    if (int(X * 1.08) != N)continue;
    cout << X << endl;
    return 0;
  }
  cout << ":(" << endl;
}
