// URL: https://atcoder.jp/contests/abc149/submissions/10120591
// Date: Sun, 16 Feb 2020 05:41:22 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int X;
  cin >> X;
  auto is_prime = [](int X) {
    bool res = true;
    for (int i = 2; i * i <= X; ++i) {
      if (X % i != 0)continue;
      res = false;
      break;
    }
    return res;
  };
  for (; !is_prime(X); ++X);
  cout << X << endl;
}
