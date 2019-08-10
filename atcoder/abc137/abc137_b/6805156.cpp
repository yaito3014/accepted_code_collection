// URL: https://atcoder.jp/contests/abc137/submissions/6805156
// Date: Sat, 10 Aug 2019 12:04:54 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int K, X;
  cin >> K >> X;
  for (int i = X - K + 1; i <= X + K - 1; ++i) {
    cout << i << " ";
  }
  cout << endl;
}
